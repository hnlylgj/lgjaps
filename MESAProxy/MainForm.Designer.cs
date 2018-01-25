namespace CloudServiceHostApp
{
    partial class MainForm
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
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(MainForm));
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tabPage1 = new System.Windows.Forms.TabPage();
            this.LoginGroupBox = new System.Windows.Forms.GroupBox();
            this.LoginButton = new System.Windows.Forms.Button();
            this.PassWordTextBox = new System.Windows.Forms.TextBox();
            this.LoginNameComboBox = new System.Windows.Forms.ComboBox();
            this.GoodDataGrid = new System.Windows.Forms.DataGrid();
            this.ServiceGroupBox = new System.Windows.Forms.GroupBox();
            this.Startbutton = new System.Windows.Forms.Button();
            this.Stopbutton = new System.Windows.Forms.Button();
            this.tabPage2 = new System.Windows.Forms.TabPage();
            this.SoundCheckBox = new System.Windows.Forms.CheckBox();
            this.Resetbutton = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.OutGolabel = new System.Windows.Forms.Label();
            this.TaskIDTextBox = new System.Windows.Forms.TextBox();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.INnumberlabel = new System.Windows.Forms.Label();
            this.tabPage3 = new System.Windows.Forms.TabPage();
            this.tbxFtpServerPort = new System.Windows.Forms.TextBox();
            this.tbxFtpRoot = new System.Windows.Forms.TextBox();
            this.ListIPcomboBox = new System.Windows.Forms.ComboBox();
            this.btnFtpServerStartStop = new System.Windows.Forms.Button();
            this.OutInforRichTextBox = new System.Windows.Forms.RichTextBox();
            this.Statuslabel = new System.Windows.Forms.Label();
            this.StatusOutPanel = new System.Windows.Forms.Panel();
            this.GridPanel = new System.Windows.Forms.Panel();
            this.GatherDataGrid = new System.Windows.Forms.DataGrid();
            this.MainNotifyIcon = new System.Windows.Forms.NotifyIcon(this.components);
            this.tabControl1.SuspendLayout();
            this.tabPage1.SuspendLayout();
            this.LoginGroupBox.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.GoodDataGrid)).BeginInit();
            this.ServiceGroupBox.SuspendLayout();
            this.tabPage2.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.tabPage3.SuspendLayout();
            this.StatusOutPanel.SuspendLayout();
            this.GridPanel.SuspendLayout();
            ((System.ComponentModel.ISupportInitialize)(this.GatherDataGrid)).BeginInit();
            this.SuspendLayout();
            // 
            // tabControl1
            // 
            this.tabControl1.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.tabControl1.Controls.Add(this.tabPage1);
            this.tabControl1.Controls.Add(this.tabPage2);
            this.tabControl1.Controls.Add(this.tabPage3);
            this.tabControl1.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.tabControl1.Location = new System.Drawing.Point(5, 0);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(1194, 153);
            this.tabControl1.TabIndex = 2;
            // 
            // tabPage1
            // 
            this.tabPage1.Controls.Add(this.LoginGroupBox);
            this.tabPage1.Controls.Add(this.GoodDataGrid);
            this.tabPage1.Controls.Add(this.ServiceGroupBox);
            this.tabPage1.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.tabPage1.Location = new System.Drawing.Point(4, 26);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage1.Size = new System.Drawing.Size(1186, 123);
            this.tabPage1.TabIndex = 0;
            this.tabPage1.Text = "功能主页";
            this.tabPage1.UseVisualStyleBackColor = true;
            // 
            // LoginGroupBox
            // 
            this.LoginGroupBox.Controls.Add(this.LoginButton);
            this.LoginGroupBox.Controls.Add(this.PassWordTextBox);
            this.LoginGroupBox.Controls.Add(this.LoginNameComboBox);
            this.LoginGroupBox.Location = new System.Drawing.Point(18, 6);
            this.LoginGroupBox.Name = "LoginGroupBox";
            this.LoginGroupBox.Size = new System.Drawing.Size(439, 63);
            this.LoginGroupBox.TabIndex = 4;
            this.LoginGroupBox.TabStop = false;
            this.LoginGroupBox.Text = "账号";
            // 
            // LoginButton
            // 
            this.LoginButton.Location = new System.Drawing.Point(345, 21);
            this.LoginButton.Name = "LoginButton";
            this.LoginButton.Size = new System.Drawing.Size(75, 37);
            this.LoginButton.TabIndex = 3;
            this.LoginButton.Text = "登 录";
            this.LoginButton.UseVisualStyleBackColor = true;
            this.LoginButton.Click += new System.EventHandler(this.LoginButton_Click);
            // 
            // PassWordTextBox
            // 
            this.PassWordTextBox.Location = new System.Drawing.Point(136, 27);
            this.PassWordTextBox.Name = "PassWordTextBox";
            this.PassWordTextBox.PasswordChar = '●';
            this.PassWordTextBox.Size = new System.Drawing.Size(181, 26);
            this.PassWordTextBox.TabIndex = 1;
            // 
            // LoginNameComboBox
            // 
            this.LoginNameComboBox.Font = new System.Drawing.Font("宋体", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.LoginNameComboBox.FormattingEnabled = true;
            this.LoginNameComboBox.Items.AddRange(new object[] {
            "lgj",
            "lin",
            "wang",
            "mu",
            "sun",
            "zhen",
            "liu",
            "user",
            "god"});
            this.LoginNameComboBox.Location = new System.Drawing.Point(18, 25);
            this.LoginNameComboBox.Name = "LoginNameComboBox";
            this.LoginNameComboBox.Size = new System.Drawing.Size(112, 28);
            this.LoginNameComboBox.TabIndex = 0;
            // 
            // GoodDataGrid
            // 
            this.GoodDataGrid.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.GoodDataGrid.DataMember = "";
            this.GoodDataGrid.HeaderForeColor = System.Drawing.SystemColors.ControlText;
            this.GoodDataGrid.Location = new System.Drawing.Point(505, 27);
            this.GoodDataGrid.Name = "GoodDataGrid";
            this.GoodDataGrid.Size = new System.Drawing.Size(220, 66);
            this.GoodDataGrid.TabIndex = 0;
            this.GoodDataGrid.Visible = false;
            this.GoodDataGrid.DoubleClick += new System.EventHandler(this.GoodDataGrid_DoubleClick);
            // 
            // ServiceGroupBox
            // 
            this.ServiceGroupBox.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.ServiceGroupBox.Controls.Add(this.Startbutton);
            this.ServiceGroupBox.Controls.Add(this.Stopbutton);
            this.ServiceGroupBox.Location = new System.Drawing.Point(798, 6);
            this.ServiceGroupBox.Name = "ServiceGroupBox";
            this.ServiceGroupBox.Size = new System.Drawing.Size(325, 63);
            this.ServiceGroupBox.TabIndex = 3;
            this.ServiceGroupBox.TabStop = false;
            this.ServiceGroupBox.Text = "服务";
            // 
            // Startbutton
            // 
            this.Startbutton.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Startbutton.Location = new System.Drawing.Point(38, 25);
            this.Startbutton.Name = "Startbutton";
            this.Startbutton.Size = new System.Drawing.Size(75, 29);
            this.Startbutton.TabIndex = 2;
            this.Startbutton.Text = "启 动";
            this.Startbutton.UseVisualStyleBackColor = true;
            this.Startbutton.Click += new System.EventHandler(this.Startbutton_Click);
            // 
            // Stopbutton
            // 
            this.Stopbutton.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Right)));
            this.Stopbutton.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Stopbutton.Location = new System.Drawing.Point(203, 25);
            this.Stopbutton.Name = "Stopbutton";
            this.Stopbutton.Size = new System.Drawing.Size(75, 29);
            this.Stopbutton.TabIndex = 2;
            this.Stopbutton.Text = "停 止";
            this.Stopbutton.UseVisualStyleBackColor = true;
            this.Stopbutton.Click += new System.EventHandler(this.Stopbutton_Click);
            // 
            // tabPage2
            // 
            this.tabPage2.Controls.Add(this.SoundCheckBox);
            this.tabPage2.Controls.Add(this.Resetbutton);
            this.tabPage2.Controls.Add(this.groupBox1);
            this.tabPage2.Controls.Add(this.TaskIDTextBox);
            this.tabPage2.Controls.Add(this.groupBox2);
            this.tabPage2.Location = new System.Drawing.Point(4, 26);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Size = new System.Drawing.Size(1186, 123);
            this.tabPage2.TabIndex = 1;
            this.tabPage2.Text = "实时统计";
            this.tabPage2.UseVisualStyleBackColor = true;
            // 
            // SoundCheckBox
            // 
            this.SoundCheckBox.AutoSize = true;
            this.SoundCheckBox.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.SoundCheckBox.Location = new System.Drawing.Point(695, 31);
            this.SoundCheckBox.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.SoundCheckBox.Name = "SoundCheckBox";
            this.SoundCheckBox.Size = new System.Drawing.Size(75, 20);
            this.SoundCheckBox.TabIndex = 12;
            this.SoundCheckBox.Text = "提示音";
            this.SoundCheckBox.UseVisualStyleBackColor = true;
            // 
            // Resetbutton
            // 
            this.Resetbutton.BackColor = System.Drawing.Color.Silver;
            this.Resetbutton.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Resetbutton.Location = new System.Drawing.Point(685, 72);
            this.Resetbutton.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.Resetbutton.Name = "Resetbutton";
            this.Resetbutton.Size = new System.Drawing.Size(94, 44);
            this.Resetbutton.TabIndex = 11;
            this.Resetbutton.Text = "开 始";
            this.Resetbutton.UseVisualStyleBackColor = false;
            this.Resetbutton.Click += new System.EventHandler(this.Resetbutton_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.OutGolabel);
            this.groupBox1.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.groupBox1.Location = new System.Drawing.Point(500, 4);
            this.groupBox1.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Padding = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.groupBox1.Size = new System.Drawing.Size(159, 60);
            this.groupBox1.TabIndex = 10;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Outgoing";
            // 
            // OutGolabel
            // 
            this.OutGolabel.AutoSize = true;
            this.OutGolabel.Font = new System.Drawing.Font("宋体", 24F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.OutGolabel.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(0)))), ((int)(((byte)(192)))));
            this.OutGolabel.Location = new System.Drawing.Point(81, 14);
            this.OutGolabel.Name = "OutGolabel";
            this.OutGolabel.Size = new System.Drawing.Size(32, 33);
            this.OutGolabel.TabIndex = 2;
            this.OutGolabel.Text = "0";
            this.OutGolabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // TaskIDTextBox
            // 
            this.TaskIDTextBox.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.TaskIDTextBox.Font = new System.Drawing.Font("宋体", 24F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.TaskIDTextBox.Location = new System.Drawing.Point(319, 72);
            this.TaskIDTextBox.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.TaskIDTextBox.Name = "TaskIDTextBox";
            this.TaskIDTextBox.ReadOnly = true;
            this.TaskIDTextBox.Size = new System.Drawing.Size(340, 44);
            this.TaskIDTextBox.TabIndex = 9;
            this.TaskIDTextBox.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.INnumberlabel);
            this.groupBox2.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.groupBox2.Location = new System.Drawing.Point(319, 4);
            this.groupBox2.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Padding = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.groupBox2.Size = new System.Drawing.Size(142, 60);
            this.groupBox2.TabIndex = 5;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Incoming";
            // 
            // INnumberlabel
            // 
            this.INnumberlabel.Font = new System.Drawing.Font("宋体", 24F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.INnumberlabel.ForeColor = System.Drawing.Color.Red;
            this.INnumberlabel.Location = new System.Drawing.Point(52, 14);
            this.INnumberlabel.Name = "INnumberlabel";
            this.INnumberlabel.Size = new System.Drawing.Size(84, 33);
            this.INnumberlabel.TabIndex = 2;
            this.INnumberlabel.Text = "0";
            this.INnumberlabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // tabPage3
            // 
            this.tabPage3.Controls.Add(this.tbxFtpServerPort);
            this.tabPage3.Controls.Add(this.tbxFtpRoot);
            this.tabPage3.Controls.Add(this.ListIPcomboBox);
            this.tabPage3.Controls.Add(this.btnFtpServerStartStop);
            this.tabPage3.Location = new System.Drawing.Point(4, 26);
            this.tabPage3.Name = "tabPage3";
            this.tabPage3.Padding = new System.Windows.Forms.Padding(3);
            this.tabPage3.Size = new System.Drawing.Size(1186, 123);
            this.tabPage3.TabIndex = 2;
            this.tabPage3.Text = "文件传输";
            this.tabPage3.UseVisualStyleBackColor = true;
            // 
            // tbxFtpServerPort
            // 
            this.tbxFtpServerPort.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.tbxFtpServerPort.Location = new System.Drawing.Point(339, 38);
            this.tbxFtpServerPort.Name = "tbxFtpServerPort";
            this.tbxFtpServerPort.Size = new System.Drawing.Size(46, 26);
            this.tbxFtpServerPort.TabIndex = 11;
            // 
            // tbxFtpRoot
            // 
            this.tbxFtpRoot.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.tbxFtpRoot.Location = new System.Drawing.Point(391, 38);
            this.tbxFtpRoot.Name = "tbxFtpRoot";
            this.tbxFtpRoot.Size = new System.Drawing.Size(254, 26);
            this.tbxFtpRoot.TabIndex = 10;
            // 
            // ListIPcomboBox
            // 
            this.ListIPcomboBox.FormattingEnabled = true;
            this.ListIPcomboBox.Location = new System.Drawing.Point(182, 40);
            this.ListIPcomboBox.Name = "ListIPcomboBox";
            this.ListIPcomboBox.Size = new System.Drawing.Size(151, 24);
            this.ListIPcomboBox.TabIndex = 9;
            // 
            // btnFtpServerStartStop
            // 
            this.btnFtpServerStartStop.Font = new System.Drawing.Font("宋体", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.btnFtpServerStartStop.Location = new System.Drawing.Point(663, 33);
            this.btnFtpServerStartStop.Name = "btnFtpServerStartStop";
            this.btnFtpServerStartStop.Size = new System.Drawing.Size(89, 34);
            this.btnFtpServerStartStop.TabIndex = 8;
            this.btnFtpServerStartStop.Text = "启动";
            this.btnFtpServerStartStop.UseVisualStyleBackColor = true;
            this.btnFtpServerStartStop.Click += new System.EventHandler(this.btnFtpServerStartStop_Click);
            // 
            // OutInforRichTextBox
            // 
            this.OutInforRichTextBox.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.OutInforRichTextBox.BackColor = System.Drawing.Color.Black;
            this.OutInforRichTextBox.Font = new System.Drawing.Font("宋体", 10F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.OutInforRichTextBox.ForeColor = System.Drawing.Color.Lime;
            this.OutInforRichTextBox.Location = new System.Drawing.Point(0, 3);
            this.OutInforRichTextBox.Name = "OutInforRichTextBox";
            this.OutInforRichTextBox.Size = new System.Drawing.Size(1191, 398);
            this.OutInforRichTextBox.TabIndex = 1;
            this.OutInforRichTextBox.Text = "";
            // 
            // Statuslabel
            // 
            this.Statuslabel.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.Statuslabel.BackColor = System.Drawing.Color.Beige;
            this.Statuslabel.Font = new System.Drawing.Font("宋体", 9F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Statuslabel.Location = new System.Drawing.Point(3, 404);
            this.Statuslabel.Name = "Statuslabel";
            this.Statuslabel.Size = new System.Drawing.Size(1188, 15);
            this.Statuslabel.TabIndex = 0;
            this.Statuslabel.Text = "就绪";
            this.Statuslabel.TextAlign = System.Drawing.ContentAlignment.MiddleLeft;
            // 
            // StatusOutPanel
            // 
            this.StatusOutPanel.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.StatusOutPanel.Controls.Add(this.Statuslabel);
            this.StatusOutPanel.Controls.Add(this.OutInforRichTextBox);
            this.StatusOutPanel.Location = new System.Drawing.Point(5, 305);
            this.StatusOutPanel.Name = "StatusOutPanel";
            this.StatusOutPanel.Size = new System.Drawing.Size(1194, 424);
            this.StatusOutPanel.TabIndex = 3;
            // 
            // GridPanel
            // 
            this.GridPanel.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.GridPanel.BackColor = System.Drawing.SystemColors.GrayText;
            this.GridPanel.Controls.Add(this.GatherDataGrid);
            this.GridPanel.Location = new System.Drawing.Point(5, 156);
            this.GridPanel.Name = "GridPanel";
            this.GridPanel.Size = new System.Drawing.Size(1191, 143);
            this.GridPanel.TabIndex = 4;
            // 
            // GatherDataGrid
            // 
            this.GatherDataGrid.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.GatherDataGrid.DataMember = "";
            this.GatherDataGrid.HeaderForeColor = System.Drawing.SystemColors.ControlText;
            this.GatherDataGrid.Location = new System.Drawing.Point(4, 3);
            this.GatherDataGrid.Name = "GatherDataGrid";
            this.GatherDataGrid.Size = new System.Drawing.Size(1184, 137);
            this.GatherDataGrid.TabIndex = 1;
            this.GatherDataGrid.DoubleClick += new System.EventHandler(this.GatherDataGrid_DoubleClick);
            // 
            // MainNotifyIcon
            // 
            this.MainNotifyIcon.Icon = ((System.Drawing.Icon)(resources.GetObject("MainNotifyIcon.Icon")));
            this.MainNotifyIcon.Text = "云服务模拟器";
            this.MainNotifyIcon.Visible = true;
            // 
            // MainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1202, 733);
            this.Controls.Add(this.GridPanel);
            this.Controls.Add(this.StatusOutPanel);
            this.Controls.Add(this.tabControl1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "MainForm";
            this.Text = "网关服务器【◆Proxy Service◆】原型演示版";
            this.WindowState = System.Windows.Forms.FormWindowState.Maximized;
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.FormTestHost_FormClosing);
            this.Load += new System.EventHandler(this.FormTestHost_Load);
            this.Shown += new System.EventHandler(this.FormTestHost_Shown);
            this.tabControl1.ResumeLayout(false);
            this.tabPage1.ResumeLayout(false);
            this.LoginGroupBox.ResumeLayout(false);
            this.LoginGroupBox.PerformLayout();
            ((System.ComponentModel.ISupportInitialize)(this.GoodDataGrid)).EndInit();
            this.ServiceGroupBox.ResumeLayout(false);
            this.tabPage2.ResumeLayout(false);
            this.tabPage2.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.tabPage3.ResumeLayout(false);
            this.tabPage3.PerformLayout();
            this.StatusOutPanel.ResumeLayout(false);
            this.GridPanel.ResumeLayout(false);
            ((System.ComponentModel.ISupportInitialize)(this.GatherDataGrid)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tabPage1;
        private System.Windows.Forms.Button Stopbutton;
        private System.Windows.Forms.Button Startbutton;
        private System.Windows.Forms.RichTextBox OutInforRichTextBox;
        private System.Windows.Forms.Label Statuslabel;
        private System.Windows.Forms.Panel StatusOutPanel;
        private System.Windows.Forms.Panel GridPanel;
        private System.Windows.Forms.DataGrid GoodDataGrid;
        private System.Windows.Forms.DataGrid GatherDataGrid;
        private System.Windows.Forms.GroupBox ServiceGroupBox;
        private System.Windows.Forms.GroupBox LoginGroupBox;
        private System.Windows.Forms.Button LoginButton;
        private System.Windows.Forms.TextBox PassWordTextBox;
        private System.Windows.Forms.ComboBox LoginNameComboBox;
        private System.Windows.Forms.NotifyIcon MainNotifyIcon;
        private System.Windows.Forms.TabPage tabPage2;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Label INnumberlabel;
        private System.Windows.Forms.TextBox TaskIDTextBox;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Label OutGolabel;
        private System.Windows.Forms.Button Resetbutton;
        private System.Windows.Forms.CheckBox SoundCheckBox;
        private System.Windows.Forms.TabPage tabPage3;
        private System.Windows.Forms.ComboBox ListIPcomboBox;
        private System.Windows.Forms.Button btnFtpServerStartStop;
        private System.Windows.Forms.TextBox tbxFtpRoot;
        private System.Windows.Forms.TextBox tbxFtpServerPort;
    }
}