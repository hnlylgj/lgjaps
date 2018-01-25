namespace CloudServiceHostApp
{
    partial class DataGridViewAccountForm
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(DataGridViewAccountForm));
            this.AccountDataGridView = new System.Windows.Forms.DataGridView();
            this.AccountID = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.LoginName = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.PassWord = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.MobileID = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.CreateDate = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.DeviceID = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.CarID = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.Login = new System.Windows.Forms.DataGridViewTextBoxColumn();
            ((System.ComponentModel.ISupportInitialize)(this.AccountDataGridView)).BeginInit();
            this.SuspendLayout();
            // 
            // AccountDataGridView
            // 
            this.AccountDataGridView.AllowUserToOrderColumns = true;
            this.AccountDataGridView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.AccountDataGridView.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.AccountID,
            this.LoginName,
            this.PassWord,
            this.MobileID,
            this.CreateDate,
            this.DeviceID,
            this.CarID,
            this.Login});
            this.AccountDataGridView.Dock = System.Windows.Forms.DockStyle.Fill;
            this.AccountDataGridView.Location = new System.Drawing.Point(0, 0);
            this.AccountDataGridView.Name = "AccountDataGridView";
            this.AccountDataGridView.RowTemplate.Height = 23;
            this.AccountDataGridView.Size = new System.Drawing.Size(1213, 740);
            this.AccountDataGridView.TabIndex = 0;
            this.AccountDataGridView.VirtualMode = true;
            this.AccountDataGridView.CellValueNeeded += new System.Windows.Forms.DataGridViewCellValueEventHandler(this.AccountDataGridView_CellValueNeeded);
            // 
            // AccountID
            // 
            this.AccountID.HeaderText = "AccountID";
            this.AccountID.Name = "AccountID";
            // 
            // LoginName
            // 
            this.LoginName.HeaderText = "LoginName";
            this.LoginName.Name = "LoginName";
            // 
            // PassWord
            // 
            this.PassWord.HeaderText = "PassWord";
            this.PassWord.Name = "PassWord";
            // 
            // MobileID
            // 
            this.MobileID.HeaderText = "MobileID";
            this.MobileID.Name = "MobileID";
            // 
            // CreateDate
            // 
            this.CreateDate.HeaderText = "CreateDate";
            this.CreateDate.Name = "CreateDate";
            this.CreateDate.Width = 90;
            // 
            // DeviceID
            // 
            this.DeviceID.HeaderText = "DeviceID";
            this.DeviceID.Name = "DeviceID";
            // 
            // CarID
            // 
            this.CarID.HeaderText = "CarID";
            this.CarID.Name = "CarID";
            // 
            // Login
            // 
            this.Login.HeaderText = "Login";
            this.Login.Name = "Login";
            // 
            // DataGridViewAccountForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(1213, 740);
            this.Controls.Add(this.AccountDataGridView);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "DataGridViewAccountForm";
            this.Text = "账号管理【高级模式】";
            this.WindowState = System.Windows.Forms.FormWindowState.Maximized;
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.DataGridViewAccountForm_FormClosing);
            this.Load += new System.EventHandler(this.DataGridViewForm_Load);
            this.Shown += new System.EventHandler(this.DataGridViewForm_Shown);
            ((System.ComponentModel.ISupportInitialize)(this.AccountDataGridView)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion
        private System.Windows.Forms.DataGridView AccountDataGridView;
        private System.Windows.Forms.DataGridViewTextBoxColumn Login;
        private System.Windows.Forms.DataGridViewTextBoxColumn CarID;
        private System.Windows.Forms.DataGridViewTextBoxColumn DeviceID;
        private System.Windows.Forms.DataGridViewTextBoxColumn CreateDate;
        private System.Windows.Forms.DataGridViewTextBoxColumn MobileID;
        private System.Windows.Forms.DataGridViewTextBoxColumn PassWord;
        private System.Windows.Forms.DataGridViewTextBoxColumn LoginName;
        private System.Windows.Forms.DataGridViewTextBoxColumn AccountID;
    }
}