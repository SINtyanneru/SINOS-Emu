namespace SINOS
{
    partial class ERROR_VIEWER
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.richTextBox = new System.Windows.Forms.RichTextBox();
            this.Exit_label = new System.Windows.Forms.Label();
            this.Go_label = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // richTextBox
            // 
            this.richTextBox.BackColor = System.Drawing.Color.Black;
            this.richTextBox.BorderStyle = System.Windows.Forms.BorderStyle.None;
            this.richTextBox.ForeColor = System.Drawing.Color.White;
            this.richTextBox.Location = new System.Drawing.Point(12, 12);
            this.richTextBox.Name = "richTextBox";
            this.richTextBox.Size = new System.Drawing.Size(776, 412);
            this.richTextBox.TabIndex = 0;
            this.richTextBox.Text = "";
            // 
            // Exit_label
            // 
            this.Exit_label.Font = new System.Drawing.Font("MS UI Gothic", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(128)));
            this.Exit_label.ForeColor = System.Drawing.Color.White;
            this.Exit_label.Location = new System.Drawing.Point(662, 427);
            this.Exit_label.Name = "Exit_label";
            this.Exit_label.Size = new System.Drawing.Size(126, 23);
            this.Exit_label.TabIndex = 1;
            this.Exit_label.Text = "[ ExitSystem ]";
            this.Exit_label.Click += new System.EventHandler(this.Exit_label_Click);
            // 
            // Go_label
            // 
            this.Go_label.Font = new System.Drawing.Font("MS UI Gothic", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(128)));
            this.Go_label.ForeColor = System.Drawing.Color.White;
            this.Go_label.Location = new System.Drawing.Point(530, 427);
            this.Go_label.Name = "Go_label";
            this.Go_label.Size = new System.Drawing.Size(126, 23);
            this.Go_label.TabIndex = 2;
            this.Go_label.Text = "[ Go System ]";
            this.Go_label.Click += new System.EventHandler(this.Go_label_Click);
            // 
            // ERROR_VIEWER
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.BackColor = System.Drawing.Color.Black;
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Center;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.Go_label);
            this.Controls.Add(this.Exit_label);
            this.Controls.Add(this.richTextBox);
            this.Cursor = System.Windows.Forms.Cursors.Default;
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "ERROR_VIEWER";
            this.Text = "ERROR_VIEWER";
            this.TopMost = true;
            this.Load += new System.EventHandler(this.ERROR_VIEWER_Load);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.RichTextBox richTextBox;
        private System.Windows.Forms.Label Exit_label;
        private System.Windows.Forms.Label Go_label;
    }
}