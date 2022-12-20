using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace SINOS
{
    public partial class ERROR_VIEWER : Form
    {
        string root = @"C:\RUMISYSTEM\SINOS\"; // ドキュメント・ルート

        public ERROR_VIEWER()
        {
            InitializeComponent();
        }

        private void ERROR_VIEWER_Load(object sender, EventArgs e)
        {
            string path = root +  "ETC/ERR/Log.txt";

            richTextBox.Text = File.ReadAllText(path);
        }

        private void Exit_label_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void Go_label_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
