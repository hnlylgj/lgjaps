namespace WinTestApp
{
    partial class TestMainForm
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
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(TestMainForm));
            this.OutInforRichTextBox = new System.Windows.Forms.RichTextBox();
            this.APCComboBox = new System.Windows.Forms.ComboBox();
            this.SchedulingButton = new System.Windows.Forms.Button();
            this.tabControl1 = new System.Windows.Forms.TabControl();
            this.tabPage1 = new System.Windows.Forms.TabPage();
            this.OrderIDTextBox = new System.Windows.Forms.TextBox();
            this.tabPage2 = new System.Windows.Forms.TabPage();
            this.TestXMLbutton = new System.Windows.Forms.Button();
            this.XMLTextBox = new System.Windows.Forms.TextBox();
            this.tabPage4 = new System.Windows.Forms.TabPage();
            this.button6 = new System.Windows.Forms.Button();
            this.button3 = new System.Windows.Forms.Button();
            this.button8 = new System.Windows.Forms.Button();
            this.button7 = new System.Windows.Forms.Button();
            this.button5 = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.button4 = new System.Windows.Forms.Button();
            this.button1 = new System.Windows.Forms.Button();
            this.tabPage3 = new System.Windows.Forms.TabPage();
            this.SoundCheckBox = new System.Windows.Forms.CheckBox();
            this.TaskIDTextBox = new System.Windows.Forms.TextBox();
            this.AutoCheckBox = new System.Windows.Forms.CheckBox();
            this.Refleshbutton = new System.Windows.Forms.Button();
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.OutGolabel = new System.Windows.Forms.Label();
            this.groupBox2 = new System.Windows.Forms.GroupBox();
            this.INnumberlabel = new System.Windows.Forms.Label();
            this.MainTestTimer = new System.Windows.Forms.Timer(this.components);
            this.OutMessagepanel = new System.Windows.Forms.Panel();
            this.Controlpanel = new System.Windows.Forms.Panel();
            this.tabControl1.SuspendLayout();
            this.tabPage1.SuspendLayout();
            this.tabPage2.SuspendLayout();
            this.tabPage4.SuspendLayout();
            this.tabPage3.SuspendLayout();
            this.groupBox1.SuspendLayout();
            this.groupBox2.SuspendLayout();
            this.OutMessagepanel.SuspendLayout();
            this.Controlpanel.SuspendLayout();
            this.SuspendLayout();
            // 
            // OutInforRichTextBox
            // 
            this.OutInforRichTextBox.BackColor = System.Drawing.Color.Black;
            this.OutInforRichTextBox.Dock = System.Windows.Forms.DockStyle.Fill;
            this.OutInforRichTextBox.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.OutInforRichTextBox.ForeColor = System.Drawing.Color.Red;
            this.OutInforRichTextBox.Location = new System.Drawing.Point(0, 0);
            this.OutInforRichTextBox.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.OutInforRichTextBox.Name = "OutInforRichTextBox";
            this.OutInforRichTextBox.ReadOnly = true;
            this.OutInforRichTextBox.Size = new System.Drawing.Size(883, 114);
            this.OutInforRichTextBox.TabIndex = 1;
            this.OutInforRichTextBox.Text = "";
            // 
            // APCComboBox
            // 
            this.APCComboBox.Font = new System.Drawing.Font("宋体", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.APCComboBox.FormattingEnabled = true;
            this.APCComboBox.Items.AddRange(new object[] {
            "C11200987654321",
            "C11200987654322",
            "A11200987654323",
            "A11200987654324",
            "B11200987654325",
            "B11200987654326"});
            this.APCComboBox.Location = new System.Drawing.Point(17, 71);
            this.APCComboBox.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.APCComboBox.Name = "APCComboBox";
            this.APCComboBox.Size = new System.Drawing.Size(270, 28);
            this.APCComboBox.TabIndex = 2;
            this.APCComboBox.SelectedIndexChanged += new System.EventHandler(this.APCComboBox_SelectedIndexChanged);
            // 
            // SchedulingButton
            // 
            this.SchedulingButton.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.SchedulingButton.Location = new System.Drawing.Point(319, 36);
            this.SchedulingButton.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.SchedulingButton.Name = "SchedulingButton";
            this.SchedulingButton.Size = new System.Drawing.Size(143, 52);
            this.SchedulingButton.TabIndex = 0;
            this.SchedulingButton.Text = "排班●新任务";
            this.SchedulingButton.UseVisualStyleBackColor = true;
            this.SchedulingButton.Click += new System.EventHandler(this.SchedulingButton_Click);
            // 
            // tabControl1
            // 
            this.tabControl1.Controls.Add(this.tabPage1);
            this.tabControl1.Controls.Add(this.tabPage4);
            this.tabControl1.Controls.Add(this.tabPage2);
            this.tabControl1.Controls.Add(this.tabPage3);
            this.tabControl1.Dock = System.Windows.Forms.DockStyle.Fill;
            this.tabControl1.Font = new System.Drawing.Font("宋体", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.tabControl1.Location = new System.Drawing.Point(0, 0);
            this.tabControl1.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.tabControl1.Name = "tabControl1";
            this.tabControl1.SelectedIndex = 0;
            this.tabControl1.Size = new System.Drawing.Size(883, 299);
            this.tabControl1.TabIndex = 3;
            // 
            // tabPage1
            // 
            this.tabPage1.BackColor = System.Drawing.Color.DarkGray;
            this.tabPage1.Controls.Add(this.OrderIDTextBox);
            this.tabPage1.Controls.Add(this.APCComboBox);
            this.tabPage1.Controls.Add(this.SchedulingButton);
            this.tabPage1.Font = new System.Drawing.Font("宋体", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.tabPage1.Location = new System.Drawing.Point(4, 29);
            this.tabPage1.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.tabPage1.Name = "tabPage1";
            this.tabPage1.Padding = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.tabPage1.Size = new System.Drawing.Size(875, 266);
            this.tabPage1.TabIndex = 0;
            this.tabPage1.Text = "设备控制";
            // 
            // OrderIDTextBox
            // 
            this.OrderIDTextBox.Font = new System.Drawing.Font("宋体", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.OrderIDTextBox.Location = new System.Drawing.Point(17, 22);
            this.OrderIDTextBox.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.OrderIDTextBox.Name = "OrderIDTextBox";
            this.OrderIDTextBox.Size = new System.Drawing.Size(270, 30);
            this.OrderIDTextBox.TabIndex = 3;
            // 
            // tabPage2
            // 
            this.tabPage2.BackColor = System.Drawing.Color.DarkGray;
            this.tabPage2.Controls.Add(this.TestXMLbutton);
            this.tabPage2.Controls.Add(this.XMLTextBox);
            this.tabPage2.Font = new System.Drawing.Font("宋体", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.tabPage2.Location = new System.Drawing.Point(4, 29);
            this.tabPage2.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.tabPage2.Name = "tabPage2";
            this.tabPage2.Padding = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.tabPage2.Size = new System.Drawing.Size(875, 266);
            this.tabPage2.TabIndex = 1;
            this.tabPage2.Text = "协议分析";
            // 
            // TestXMLbutton
            // 
            this.TestXMLbutton.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.TestXMLbutton.Location = new System.Drawing.Point(586, 8);
            this.TestXMLbutton.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.TestXMLbutton.Name = "TestXMLbutton";
            this.TestXMLbutton.Size = new System.Drawing.Size(107, 57);
            this.TestXMLbutton.TabIndex = 1;
            this.TestXMLbutton.Text = "测试";
            this.TestXMLbutton.UseVisualStyleBackColor = true;
            this.TestXMLbutton.Click += new System.EventHandler(this.TestXMLbutton_Click);
            // 
            // XMLTextBox
            // 
            this.XMLTextBox.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left)));
            this.XMLTextBox.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.XMLTextBox.Location = new System.Drawing.Point(10, 7);
            this.XMLTextBox.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.XMLTextBox.Multiline = true;
            this.XMLTextBox.Name = "XMLTextBox";
            this.XMLTextBox.ReadOnly = true;
            this.XMLTextBox.ScrollBars = System.Windows.Forms.ScrollBars.Both;
            this.XMLTextBox.Size = new System.Drawing.Size(560, 253);
            this.XMLTextBox.TabIndex = 0;
            // 
            // tabPage4
            // 
            this.tabPage4.BackColor = System.Drawing.Color.DarkGray;
            this.tabPage4.Controls.Add(this.button6);
            this.tabPage4.Controls.Add(this.button3);
            this.tabPage4.Controls.Add(this.button8);
            this.tabPage4.Controls.Add(this.button7);
            this.tabPage4.Controls.Add(this.button5);
            this.tabPage4.Controls.Add(this.button2);
            this.tabPage4.Controls.Add(this.button4);
            this.tabPage4.Controls.Add(this.button1);
            this.tabPage4.Font = new System.Drawing.Font("宋体", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.tabPage4.Location = new System.Drawing.Point(4, 29);
            this.tabPage4.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.tabPage4.Name = "tabPage4";
            this.tabPage4.Size = new System.Drawing.Size(875, 266);
            this.tabPage4.TabIndex = 3;
            this.tabPage4.Text = "功能模拟";
            // 
            // button6
            // 
            this.button6.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.button6.Location = new System.Drawing.Point(433, 116);
            this.button6.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.button6.Name = "button6";
            this.button6.Size = new System.Drawing.Size(121, 53);
            this.button6.TabIndex = 3;
            this.button6.Text = "心 跳2";
            this.button6.UseVisualStyleBackColor = true;
            this.button6.Click += new System.EventHandler(this.button6_Click);
            // 
            // button3
            // 
            this.button3.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.button3.Location = new System.Drawing.Point(433, 31);
            this.button3.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.button3.Name = "button3";
            this.button3.Size = new System.Drawing.Size(121, 57);
            this.button3.TabIndex = 3;
            this.button3.Text = "心 跳";
            this.button3.UseVisualStyleBackColor = true;
            this.button3.Click += new System.EventHandler(this.button3_Click);
            // 
            // button8
            // 
            this.button8.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.button8.Location = new System.Drawing.Point(742, 108);
            this.button8.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.button8.Name = "button8";
            this.button8.Size = new System.Drawing.Size(118, 60);
            this.button8.TabIndex = 2;
            this.button8.Text = "启 动4";
            this.button8.UseVisualStyleBackColor = true;
            this.button8.Click += new System.EventHandler(this.button8_Click);
            // 
            // button7
            // 
            this.button7.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.button7.Location = new System.Drawing.Point(742, 28);
            this.button7.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.button7.Name = "button7";
            this.button7.Size = new System.Drawing.Size(118, 60);
            this.button7.TabIndex = 2;
            this.button7.Text = "启 动3";
            this.button7.UseVisualStyleBackColor = true;
            this.button7.Click += new System.EventHandler(this.button7_Click);
            // 
            // button5
            // 
            this.button5.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.button5.Location = new System.Drawing.Point(238, 114);
            this.button5.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.button5.Name = "button5";
            this.button5.Size = new System.Drawing.Size(118, 54);
            this.button5.TabIndex = 2;
            this.button5.Text = "启 动2";
            this.button5.UseVisualStyleBackColor = true;
            this.button5.Click += new System.EventHandler(this.button5_Click);
            // 
            // button2
            // 
            this.button2.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.button2.Location = new System.Drawing.Point(238, 31);
            this.button2.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(118, 60);
            this.button2.TabIndex = 2;
            this.button2.Text = "启 动";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // button4
            // 
            this.button4.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.button4.Location = new System.Drawing.Point(74, 114);
            this.button4.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.button4.Name = "button4";
            this.button4.Size = new System.Drawing.Size(121, 55);
            this.button4.TabIndex = 1;
            this.button4.Text = "计 数2";
            this.button4.UseVisualStyleBackColor = true;
            this.button4.Click += new System.EventHandler(this.button4_Click);
            // 
            // button1
            // 
            this.button1.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.button1.Location = new System.Drawing.Point(74, 34);
            this.button1.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.button1.Name = "button1";
            this.button1.Size = new System.Drawing.Size(121, 55);
            this.button1.TabIndex = 1;
            this.button1.Text = "计 数";
            this.button1.UseVisualStyleBackColor = true;
            this.button1.Click += new System.EventHandler(this.button1_Click);
            // 
            // tabPage3
            // 
            this.tabPage3.BackColor = System.Drawing.Color.DarkGray;
            this.tabPage3.Controls.Add(this.SoundCheckBox);
            this.tabPage3.Controls.Add(this.TaskIDTextBox);
            this.tabPage3.Controls.Add(this.AutoCheckBox);
            this.tabPage3.Controls.Add(this.Refleshbutton);
            this.tabPage3.Controls.Add(this.groupBox1);
            this.tabPage3.Controls.Add(this.groupBox2);
            this.tabPage3.Font = new System.Drawing.Font("宋体", 15.75F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.tabPage3.Location = new System.Drawing.Point(4, 29);
            this.tabPage3.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.tabPage3.Name = "tabPage3";
            this.tabPage3.Size = new System.Drawing.Size(875, 266);
            this.tabPage3.TabIndex = 2;
            this.tabPage3.Text = "客流统计";
            // 
            // SoundCheckBox
            // 
            this.SoundCheckBox.AutoSize = true;
            this.SoundCheckBox.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.SoundCheckBox.Location = new System.Drawing.Point(417, 82);
            this.SoundCheckBox.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.SoundCheckBox.Name = "SoundCheckBox";
            this.SoundCheckBox.Size = new System.Drawing.Size(75, 20);
            this.SoundCheckBox.TabIndex = 9;
            this.SoundCheckBox.Text = "提示音";
            this.SoundCheckBox.UseVisualStyleBackColor = true;
            // 
            // TaskIDTextBox
            // 
            this.TaskIDTextBox.BackColor = System.Drawing.SystemColors.ActiveCaption;
            this.TaskIDTextBox.Font = new System.Drawing.Font("宋体", 26.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.TaskIDTextBox.Location = new System.Drawing.Point(207, 140);
            this.TaskIDTextBox.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.TaskIDTextBox.Name = "TaskIDTextBox";
            this.TaskIDTextBox.ReadOnly = true;
            this.TaskIDTextBox.Size = new System.Drawing.Size(493, 47);
            this.TaskIDTextBox.TabIndex = 8;
            this.TaskIDTextBox.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            // 
            // AutoCheckBox
            // 
            this.AutoCheckBox.AutoSize = true;
            this.AutoCheckBox.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.AutoCheckBox.Location = new System.Drawing.Point(417, 39);
            this.AutoCheckBox.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.AutoCheckBox.Name = "AutoCheckBox";
            this.AutoCheckBox.Size = new System.Drawing.Size(67, 20);
            this.AutoCheckBox.TabIndex = 7;
            this.AutoCheckBox.Text = "监 控";
            this.AutoCheckBox.UseVisualStyleBackColor = true;
            this.AutoCheckBox.CheckedChanged += new System.EventHandler(this.AutoCheckBox_CheckedChanged);
            // 
            // Refleshbutton
            // 
            this.Refleshbutton.BackColor = System.Drawing.Color.Silver;
            this.Refleshbutton.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Refleshbutton.Location = new System.Drawing.Point(706, 139);
            this.Refleshbutton.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.Refleshbutton.Name = "Refleshbutton";
            this.Refleshbutton.Size = new System.Drawing.Size(94, 48);
            this.Refleshbutton.TabIndex = 6;
            this.Refleshbutton.Text = "刷 新";
            this.Refleshbutton.UseVisualStyleBackColor = false;
            this.Refleshbutton.Click += new System.EventHandler(this.Refleshbutton_Click);
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.OutGolabel);
            this.groupBox1.Font = new System.Drawing.Font("宋体", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.groupBox1.Location = new System.Drawing.Point(514, 4);
            this.groupBox1.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Padding = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.groupBox1.Size = new System.Drawing.Size(186, 128);
            this.groupBox1.TabIndex = 5;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "Outgoing";
            // 
            // OutGolabel
            // 
            this.OutGolabel.AutoSize = true;
            this.OutGolabel.Font = new System.Drawing.Font("宋体", 42F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.OutGolabel.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(0)))), ((int)(((byte)(0)))), ((int)(((byte)(192)))));
            this.OutGolabel.Location = new System.Drawing.Point(62, 42);
            this.OutGolabel.Name = "OutGolabel";
            this.OutGolabel.Size = new System.Drawing.Size(53, 56);
            this.OutGolabel.TabIndex = 2;
            this.OutGolabel.Text = "0";
            this.OutGolabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // groupBox2
            // 
            this.groupBox2.Controls.Add(this.INnumberlabel);
            this.groupBox2.Font = new System.Drawing.Font("宋体", 15F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.groupBox2.Location = new System.Drawing.Point(207, 4);
            this.groupBox2.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.groupBox2.Name = "groupBox2";
            this.groupBox2.Padding = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.groupBox2.Size = new System.Drawing.Size(183, 128);
            this.groupBox2.TabIndex = 4;
            this.groupBox2.TabStop = false;
            this.groupBox2.Text = "Incoming";
            // 
            // INnumberlabel
            // 
            this.INnumberlabel.Font = new System.Drawing.Font("宋体", 42F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.INnumberlabel.ForeColor = System.Drawing.Color.Red;
            this.INnumberlabel.Location = new System.Drawing.Point(38, 35);
            this.INnumberlabel.Name = "INnumberlabel";
            this.INnumberlabel.Size = new System.Drawing.Size(106, 71);
            this.INnumberlabel.TabIndex = 2;
            this.INnumberlabel.Text = "0";
            this.INnumberlabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // MainTestTimer
            // 
            this.MainTestTimer.Interval = 1500;
            this.MainTestTimer.Tick += new System.EventHandler(this.MainTestTimer_Tick);
            // 
            // OutMessagepanel
            // 
            this.OutMessagepanel.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.OutMessagepanel.Controls.Add(this.OutInforRichTextBox);
            this.OutMessagepanel.Location = new System.Drawing.Point(4, 308);
            this.OutMessagepanel.Name = "OutMessagepanel";
            this.OutMessagepanel.Size = new System.Drawing.Size(883, 114);
            this.OutMessagepanel.TabIndex = 4;
            // 
            // Controlpanel
            // 
            this.Controlpanel.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.Controlpanel.Controls.Add(this.tabControl1);
            this.Controlpanel.Location = new System.Drawing.Point(4, 12);
            this.Controlpanel.Name = "Controlpanel";
            this.Controlpanel.Size = new System.Drawing.Size(883, 299);
            this.Controlpanel.TabIndex = 5;
            // 
            // TestMainForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(7F, 14F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(891, 426);
            this.Controls.Add(this.Controlpanel);
            this.Controls.Add(this.OutMessagepanel);
            this.Font = new System.Drawing.Font("宋体", 10.5F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Margin = new System.Windows.Forms.Padding(3, 4, 3, 4);
            this.Name = "TestMainForm";
            this.Text = "【物联网智能客车◆客流统计系统】快速原型演示";
            this.Shown += new System.EventHandler(this.TestMainForm_Shown);
            this.tabControl1.ResumeLayout(false);
            this.tabPage1.ResumeLayout(false);
            this.tabPage1.PerformLayout();
            this.tabPage2.ResumeLayout(false);
            this.tabPage2.PerformLayout();
            this.tabPage4.ResumeLayout(false);
            this.tabPage3.ResumeLayout(false);
            this.tabPage3.PerformLayout();
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.groupBox2.ResumeLayout(false);
            this.OutMessagepanel.ResumeLayout(false);
            this.Controlpanel.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion
        private System.Windows.Forms.RichTextBox OutInforRichTextBox;
        private System.Windows.Forms.ComboBox APCComboBox;
        private System.Windows.Forms.Button SchedulingButton;
        private System.Windows.Forms.TabControl tabControl1;
        private System.Windows.Forms.TabPage tabPage1;
        private System.Windows.Forms.TabPage tabPage2;
        private System.Windows.Forms.TabPage tabPage3;
        private System.Windows.Forms.TextBox XMLTextBox;
        private System.Windows.Forms.Button TestXMLbutton;
        private System.Windows.Forms.GroupBox groupBox2;
        private System.Windows.Forms.Label INnumberlabel;
        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.Label OutGolabel;
        private System.Windows.Forms.Button Refleshbutton;
        private System.Windows.Forms.CheckBox AutoCheckBox;
        private System.Windows.Forms.Timer MainTestTimer;
        private System.Windows.Forms.TextBox OrderIDTextBox;
        private System.Windows.Forms.TextBox TaskIDTextBox;
        private System.Windows.Forms.TabPage tabPage4;
        private System.Windows.Forms.Button button1;
        private System.Windows.Forms.Button button2;
        private System.Windows.Forms.Button button3;
        private System.Windows.Forms.CheckBox SoundCheckBox;
        private System.Windows.Forms.Panel OutMessagepanel;
        private System.Windows.Forms.Panel Controlpanel;
        private System.Windows.Forms.Button button6;
        private System.Windows.Forms.Button button5;
        private System.Windows.Forms.Button button4;
        private System.Windows.Forms.Button button7;
        private System.Windows.Forms.Button button8;
    }
}

