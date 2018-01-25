namespace SmartDeviceTest
{
    partial class MainForm
    {
        /// <summary>
        /// 必需的设计器变量。
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// 清理所有正在使用的资源。
        /// </summary>
        /// <param name="disposing">如果应释放托管资源，为 true；否则为 false。</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows 窗体设计器生成的代码

        /// <summary>
        /// 设计器支持所需的方法 - 不要修改
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(MainForm));
            this.OutMessagepanel = new System.Windows.Forms.Panel();
            this.Basepanel = new System.Windows.Forms.Panel();
            this.OutInforRichTextBox = new System.Windows.Forms.RichTextBox();
            this.MaintabControl = new System.Windows.Forms.TabControl();
            this.tabPage1 = new System.Windows.Forms.TabPage();
            this.tabPage2 = new System.Windows.Forms.TabPage();
            this.Startupbutton = new System.Windows.Forms.Button();
            this.Countbutton = new System.Windows.Forms.Button();
            this.Alivebutton = new System.Windows.Forms.Button();
            this.tabPage3 = new System.Windows.Forms.TabPage();
            this.XMLTextBox = new System.Windows.Forms.TextBox();
            this.ModeCheckBox = new System.Windows.Forms.CheckBox();
            this.OutMessagepanel.SuspendLayout();
            this.Basepanel.SuspendLayout();
            this.MaintabControl.SuspendLayout();
            this.tabPage1.SuspendLayout();
            this.tabPage2.SuspendLayout();
            this.tabPage3.SuspendLayout();
            this.SuspendLayout();
            // 
            // OutMessagepanel
            // 
            this.OutMessagepanel.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.OutMessagepanel.BackColor = System.Drawing.Color.DarkSalmon;
            this.OutMessagepanel.Controls.Add(this.OutInforRichTextBox);
            this.OutMessagepanel.Location = new System.Drawing.Point(2, 240);
            this.OutMessagepanel.Name = "OutMessagepanel";
            this.OutMessagepanel.Size = new System.Drawing.Size(708, 233);
            this.OutMessagepanel.TabIndex = 0;
            // 
            // Basepanel
            // 
            this.Basepanel.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.Basepanel.BackColor = System.Drawing.SystemColors.InactiveCaption;
            this.Basepanel.Controls.Add(this.MaintabControl);
            this.Basepanel.Location = new System.Drawing.Point(2, 0);
            this.Basepanel.Name = "Basepanel";
            this.Basepanel.Size = new System.Drawing.Size(708, 234);
            this.Basepanel.TabIndex = 1;
            // 
            // OutInforRichTextBox
            // 
            this.OutInforRichTextBox.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.OutInforRichTextBox.BackColor = System.Drawing.Color.Black;
            this.OutInforRichTextBox.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.OutInforRichTextBox.ForeColor = System.Drawing.Color.Red;
            this.OutInforRichTextBox.Location = new System.Drawing.Point(3, 8);
            this.OutInforRichTextBox.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.OutInforRichTextBox.Name = "OutInforRichTextBox";
            this.OutInforRichTextBox.ReadOnly = true;
            this.OutInforRichTextBox.Size = new System.Drawing.Size(702, 217);
            this.OutInforRichTextBox.TabIndex = 2;
            this.OutInforRichTextBox.Text = "";
            // 
            // MaintabControl
            // 
            this.MaintabControl.Controls.Add(this.tabPage2);
            this.MaintabControl.Controls.Add(this.tabPage3);
            this.MaintabControl.Controls.Add(this.tabPage1);
            this.MaintabControl.Dock = System.Windows.Forms.DockStyle.Fill;
            this.MaintabControl.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.MaintabControl.Location = new System.Drawing.Point(0, 0);
            this.MaintabControl.Name = "MaintabControl";
            this.MaintabControl.SelectedIndex = 0;
            this.MaintabControl.Size = new System.Drawing.Size(708, 234);
            this.MaintabControl.TabIndex = 0;
            // 
            // tabPage1
            // 
            this.tabPage1.BackColor = System.Drawing.Color.LightGray;
            this.tabPage1.Controls.Add(this.ModeCheckBox);
            this.tabPage1.Location = new System.Drawing.Point(4, 26);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage1.Size = new System.Drawing.Size(700, 204);
            this.tabPage1.TabIndex = 0;
            this.tabPage1.Text = "附加功能";
            // 
            // tabPage2
            // 
            this.tabPage2.BackColor = System.Drawing.Color.Gainsboro;
            this.tabPage2.Controls.Add(this.Alivebutton);
            this.tabPage2.Controls.Add(this.Countbutton);
            this.tabPage2.Controls.Add(this.Startupbutton);
            this.tabPage2.Location = new System.Drawing.Point(4, 26);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage2.Size = new System.Drawing.Size(700, 204);
            this.tabPage2.TabIndex = 1;
            this.tabPage2.Text = "功能主页";
            // 
            // Startupbutton
            // 
            this.Startupbutton.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.Startupbutton.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Startupbutton.Location = new System.Drawing.Point(263, 7);
            this.Startupbutton.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.Startupbutton.Name = "Startupbutton";
            this.Startupbutton.Size = new System.Drawing.Size(121, 55);
            this.Startupbutton.TabIndex = 3;
            this.Startupbutton.Text = "启 动";
            this.Startupbutton.UseVisualStyleBackColor = true;
            this.Startupbutton.Click += new System.EventHandler(this.Startupbutton_Click);
            // 
            // Countbutton
            // 
            this.Countbutton.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.Countbutton.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Countbutton.Location = new System.Drawing.Point(263, 70);
            this.Countbutton.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.Countbutton.Name = "Countbutton";
            this.Countbutton.Size = new System.Drawing.Size(121, 55);
            this.Countbutton.TabIndex = 4;
            this.Countbutton.Text = "计 数";
            this.Countbutton.UseVisualStyleBackColor = true;
            this.Countbutton.Click += new System.EventHandler(this.Countbutton_Click);
            // 
            // Alivebutton
            // 
            this.Alivebutton.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.Alivebutton.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Alivebutton.Location = new System.Drawing.Point(263, 133);
            this.Alivebutton.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.Alivebutton.Name = "Alivebutton";
            this.Alivebutton.Size = new System.Drawing.Size(121, 57);
            this.Alivebutton.TabIndex = 5;
            this.Alivebutton.Text = "心 跳";
            this.Alivebutton.UseVisualStyleBackColor = true;
            this.Alivebutton.Click += new System.EventHandler(this.Alivebutton_Click);
            // 
            // tabPage3
            // 
            this.tabPage3.BackColor = System.Drawing.Color.Gainsboro;
            this.tabPage3.Controls.Add(this.XMLTextBox);
            this.tabPage3.Location = new System.Drawing.Point(4, 26);
            this.tabPage3.Name = "tabPage3";
            this.tabPage3.Size = new System.Drawing.Size(700, 165);
            this.tabPage3.TabIndex = 2;
            this.tabPage3.Text = "协议分析";
            // 
            // XMLTextBox
            // 
            this.XMLTextBox.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left)));
            this.XMLTextBox.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.XMLTextBox.Location = new System.Drawing.Point(6, 4);
            this.XMLTextBox.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.XMLTextBox.Multiline = true;
            this.XMLTextBox.Name = "XMLTextBox";
            this.XMLTextBox.ReadOnly = true;
            this.XMLTextBox.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            this.XMLTextBox.Size = new System.Drawing.Size(624, 157);
            this.XMLTextBox.TabIndex = 1;
            // 
            // ModeCheckBox
            // 
            this.ModeCheckBox.AutoSize = true;
            this.ModeCheckBox.Location = new System.Drawing.Point(332, 29);
            this.ModeCheckBox.Name = "ModeCheckBox";
            this.ModeCheckBox.Size = new System.Drawing.Size(91, 20);
            this.ModeCheckBox.TabIndex = 7;
            this.ModeCheckBox.Text = "模式选择";
            this.ModeCheckBox.UseVisualStyleBackColor = true;
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(713, 478);
            this.Controls.Add(this.Basepanel);
            this.Controls.Add(this.OutMessagepanel);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "MainForm";
            this.Text = "智能设备模拟器";
            this.OutMessagepanel.ResumeLayout(false);
            this.Basepanel.ResumeLayout(false);
            this.MaintabControl.ResumeLayout(false);
            this.tabPage1.ResumeLayout(false);
            this.tabPage1.PerformLayout();
            this.tabPage2.ResumeLayout(false);
            this.tabPage3.ResumeLayout(false);
            this.tabPage3.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel OutMessagepanel;
        private System.Windows.Forms.Panel Basepanel;
        private System.Windows.Forms.RichTextBox OutInforRichTextBox;
        private System.Windows.Forms.TabControl MaintabControl;
        private System.Windows.Forms.TabPage tabPage1;
        private System.Windows.Forms.TabPage tabPage2;
        private System.Windows.Forms.Button Startupbutton;
        private System.Windows.Forms.Button Countbutton;
        private System.Windows.Forms.Button Alivebutton;
        private System.Windows.Forms.TabPage tabPage3;
        private System.Windows.Forms.TextBox XMLTextBox;
        private System.Windows.Forms.CheckBox ModeCheckBox;
    }
}

