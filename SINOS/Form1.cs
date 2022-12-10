using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using Microsoft.Web.WebView2.Core;
using Microsoft.Web.WebView2.WinForms;
using System.Runtime.InteropServices;
using System.IO;
using Newtonsoft.Json;
using System.Security.Authentication;
using Microsoft.Web.WebView2.Wpf;
using System.Runtime.InteropServices.ComTypes;
using MediaPlayer;
using System.Media;

namespace SINOS
{
    public partial class Form1 : Form
    {
        private JsToCs CsClass = new JsToCs();

        public Form1()
        {
            InitializeComponent();
            InitializeAsync();

            webView.NavigationCompleted += WebView_NavigationCompleted;
            webView.CoreWebView2InitializationCompleted += webView2_CoreWebView2InitializationCompleted;
        }

        async void InitializeAsync()
        {
            try
            {
                CoreWebView2EnvironmentOptions options = new CoreWebView2EnvironmentOptions("--disable-web-security --user-data-dir=\"C://RUMISYSTEM/SINOS/OS/SYSTEM256/\"");
                CoreWebView2Environment environment = await CoreWebView2Environment.CreateAsync(null, null, options);
                
                await webView.EnsureCoreWebView2Async(environment);
            }
            catch (Exception)
            {
                MessageBox.Show("WebView2ランタイムがインストールされていない可能性があります。", Application.ProductName, MessageBoxButtons.OK, MessageBoxIcon.Warning);
                this.Close();
            }
        }


        private void Form1_Load(object sender, EventArgs e)
        {            
        }

        private void WebView_NavigationCompleted(object sender, CoreWebView2NavigationCompletedEventArgs e)
        {
            try
            {
                if (webView.CoreWebView2 != null)
                {
                    //JavaScriptからC#のメソッドが実行できる様に仕込む
                    webView.CoreWebView2.AddHostObjectToScript("class", CsClass);
                }
                else
                {
                    MessageBox.Show("CoreWebView2==null");
                }
            }
            catch (Exception ex)
            {
                MessageBox.Show(ex.ToString());
            }
        }
        private void webView2_CoreWebView2InitializationCompleted(object sender, Microsoft.Web.WebView2.Core.CoreWebView2InitializationCompletedEventArgs e)
        {
            //開発者ツールを無効化
            //webView.CoreWebView2.Settings.AreDevToolsEnabled = false;
            //コンテキストメニュー無効化
            webView.CoreWebView2.Settings.AreDefaultContextMenusEnabled = false;
            //ズーム無効化
            webView.CoreWebView2.Settings.IsZoomControlEnabled = false;
            //ステータスバー無効化
            webView.CoreWebView2.Settings.IsStatusBarEnabled = false;
            //キー無効化
            //webView.CoreWebView2.Settings.AreBrowserAcceleratorKeysEnabled = false;

            webView.CoreWebView2.OpenDevToolsWindow();

            StreamReader sr_index_path = new StreamReader(@"C:\RUMISYSTEM\SINOS\CONF\SYS\WEBPATH\INDEX.txt", Encoding.GetEncoding("UTF-8"));

            webView.CoreWebView2.Navigate(@"file:///" + sr_index_path.ReadToEnd());
        }
    }

    [ClassInterface(ClassInterfaceType.AutoDual)]
    [ComVisible(true)]
    public class JsToCs
    {
        string root = @"C:\RUMISYSTEM\SINOS\"; // ドキュメント・ルート

        class Data
        {
            public string NAME { get; set; }
            public string PATH { get; set; }
            public string TYPE { get; set; }
            public string MIME { get; set; }
        }

        public string FileListGet(string Path)
        {
            Console.WriteLine("[ *** ]Runing :GetFileList");

            string path = root + Path.Replace("/", @"\");

            //"C:\test"以下の".txt"ファイルをすべて取得する
            System.IO.DirectoryInfo di = new System.IO.DirectoryInfo(path);
            System.IO.FileInfo[] files = di.GetFiles("*", System.IO.SearchOption.TopDirectoryOnly);
            System.IO.DirectoryInfo[] dirs = di.GetDirectories("*", System.IO.SearchOption.TopDirectoryOnly);

            Console.WriteLine(files.Length);

            int count = 0;

            Data[] json_data = new Data[files.Length + dirs.Length];

            //ディレクトリ
            foreach (System.IO.DirectoryInfo f in dirs)
            {
                Console.WriteLine(f.FullName);

                Console.WriteLine(f.FullName);
                json_data[count] = new Data();
                json_data[count].PATH = f.FullName;
                json_data[count].NAME = f.Name;
                json_data[count].TYPE = "DIR";
                json_data[count].MIME = "DIR";
                count++;

            }
            //フォルダ
            foreach (System.IO.FileInfo f in files)
            {
                Console.WriteLine(f.FullName);

                Console.WriteLine(f.FullName);
                json_data[count] = new Data();
                json_data[count].PATH = f.FullName;
                json_data[count].NAME = f.Name;
                json_data[count].TYPE = "FILE";
                json_data[count].MIME = f.Name.Split('.')[f.Name.Split('.').Length - 1];
                Console.WriteLine(f.Name.Split('.')[f.Name.Split('.').Length - 1]);
                count++;
            }

            string jsonStr = JsonConvert.SerializeObject(json_data);

            return jsonStr;
        }

        public string FileDataGet(string Path)
        {
            try
            {
                string path = root + Path.Replace("/", @"\");

                switch (Path.Split('.')[Path.Split('.').Length - 1])
                {
                    case "png":
                    case "jpg":
                    case "jpeg":
                    case "gif":
                    case "bmp":
                        Bitmap bitmap = new Bitmap(path);

                        return BitmapToBase64String(bitmap);

                    default:
                        return File.ReadAllText(path);
                }
            }
            catch(Exception ex)
            {
                MessageBox.Show(ex.Message);
            }

            return null;
        }

        public string FileExists(string Path)
        {
            string path = root + Path.Replace("/", @"\");
            if (System.IO.File.Exists(path))
            {
                //ファイルが存在します
                return "EXT";
            }
            else
            {
                //ファイルが存在しません
                return "NEXT";
            }
        }

        public string PlaySound(string Path)
        {
            try
            {
                string path = root + Path.Replace("/", @"\");
                SoundPlayer player= new SoundPlayer(path);
                player.Play();
            }
            catch (Exception ex)
            {
                MessageBox.Show("PlaySound:" + ex.Message);
            }

            return null;
        }

        public string FileTextGet(string Path)
        {
            try
            {
                string path = root + Path.Replace("/", @"\");

                return File.ReadAllText(path);
            }catch(Exception ex)
            {
                MessageBox.Show(ex.Message);
            }

            return null;
        }

        public void SaveFile(string Path, string DATA)
        {
            try
            {
                string path = root + Path.Replace("/", @"\");

                File.WriteAllText(path, DATA);
            }catch(Exception ex)
            {
                MessageBox.Show(ex.Message);
            }
        }

        public string OpenFileDialog()
        {
            OpenFileDialog ofd = new OpenFileDialog();
            ofd.ShowDialog();
            return ofd.FileName.Replace(@"C:\RUMISYSTEM\SINOS","").Replace(@"\","/");
        }


        string BitmapToBase64String(Bitmap bitmap)
        {
            using (MemoryStream ms = new MemoryStream())
            {
                bitmap.Save(ms, System.Drawing.Imaging.ImageFormat.Png);
                byte[] bites = ms.ToArray();
                return Convert.ToBase64String(bites);
            }
        }
    }
}
