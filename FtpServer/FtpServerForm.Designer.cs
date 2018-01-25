namespace FtpServer
{
    partial class FtpServerForm
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
        /// 设计器支持所需的方法 - 不要
        /// 使用代码编辑器修改此方法的内容。
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(FtpServerForm));
            this.lstboxStatus = new System.Windows.Forms.ListBox();
            this.label1 = new System.Windows.Forms.Label();
            this.tbxFtpServerIp = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.tbxFtpServerPort = new System.Windows.Forms.TextBox();
            this.label3 = new System.Windows.Forms.Label();
            this.tbxFtpRoot = new System.Windows.Forms.TextBox();
            this.btnFtpServerStartStop = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // lstboxStatus
            // 
            this.lstboxStatus.Anchor = ((System.Windows.Forms.AnchorStyles)(((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.lstboxStatus.BackColor = System.Drawing.SystemColors.WindowText;
            this.lstboxStatus.ForeColor = System.Drawing.SystemColors.Window;
            this.lstboxStatus.FormattingEnabled = true;
            this.lstboxStatus.ItemHeight = 12;
            this.lstboxStatus.Location = new System.Drawing.Point(-4, 0);
            this.lstboxStatus.Name = "lstboxStatus";
            this.lstboxStatus.SelectionMode = System.Windows.Forms.SelectionMode.None;
            this.lstboxStatus.Size = new System.Drawing.Size(930, 256);
            this.lstboxStatus.TabIndex = 0;
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label1.Location = new System.Drawing.Point(12, 280);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(88, 16);
            this.label1.TabIndex = 1;
            this.label1.Text = "服务地址：";
            // 
            // tbxFtpServerIp
            // 
            this.tbxFtpServerIp.Font = new System.Drawing.Font("宋体", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.tbxFtpServerIp.Location = new System.Drawing.Point(87, 274);
            this.tbxFtpServerIp.Name = "tbxFtpServerIp";
            this.tbxFtpServerIp.Size = new System.Drawing.Size(165, 29);
            this.tbxFtpServerIp.TabIndex = 2;
            this.tbxFtpServerIp.TextChanged += new System.EventHandler(this.tbxFtpServerIp_TextChanged);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(258, 283);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(17, 12);
            this.label2.TabIndex = 3;
            this.label2.Text = "：";
            // 
            // tbxFtpServerPort
            // 
            this.tbxFtpServerPort.Font = new System.Drawing.Font("宋体", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.tbxFtpServerPort.Location = new System.Drawing.Point(272, 274);
            this.tbxFtpServerPort.Name = "tbxFtpServerPort";
            this.tbxFtpServerPort.Size = new System.Drawing.Size(46, 29);
            this.tbxFtpServerPort.TabIndex = 4;
            // 
            // label3
            // 
            this.label3.AutoSize = true;
            this.label3.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.label3.Location = new System.Drawing.Point(337, 281);
            this.label3.Name = "label3";
            this.label3.Size = new System.Drawing.Size(56, 16);
            this.label3.TabIndex = 5;
            this.label3.Text = "主目录";
            // 
            // tbxFtpRoot
            // 
            this.tbxFtpRoot.Font = new System.Drawing.Font("宋体", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.tbxFtpRoot.Location = new System.Drawing.Point(399, 274);
            this.tbxFtpRoot.Name = "tbxFtpRoot";
            this.tbxFtpRoot.Size = new System.Drawing.Size(254, 29);
            this.tbxFtpRoot.TabIndex = 6;
            // 
            // btnFtpServerStartStop
            // 
            this.btnFtpServerStartStop.Font = new System.Drawing.Font("宋体", 14.25F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            this.btnFtpServerStartStop.Location = new System.Drawing.Point(659, 275);
            this.btnFtpServerStartStop.Name = "btnFtpServerStartStop";
            this.btnFtpServerStartStop.Size = new System.Drawing.Size(65, 26);
            this.btnFtpServerStartStop.TabIndex = 7;
            this.btnFtpServerStartStop.Text = "启动";
            this.btnFtpServerStartStop.UseVisualStyleBackColor = true;
            this.btnFtpServerStartStop.Click += new System.EventHandler(this.btnFtpServerStartStop_Click);
            // 
            // FtpServerForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(931, 384);
            this.Controls.Add(this.btnFtpServerStartStop);
            this.Controls.Add(this.tbxFtpRoot);
            this.Controls.Add(this.label3);
            this.Controls.Add(this.tbxFtpServerPort);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.tbxFtpServerIp);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.lstboxStatus);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "FtpServerForm";
            this.Text = "移动智能网关【◆Edge Smart Agent●●FTP◆】原型演示版";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.ListBox lstboxStatus;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox tbxFtpServerIp;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox tbxFtpServerPort;
        private System.Windows.Forms.Label label3;
        private System.Windows.Forms.TextBox tbxFtpRoot;
        private System.Windows.Forms.Button btnFtpServerStartStop;
    }
}

