namespace CloudServiceHostApp
{
    partial class DataGridViewGatherForm
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(DataGridViewGatherForm));
            this.GatherDataGridView = new System.Windows.Forms.DataGridView();
            this.FlowID = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.TypeID = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.FlagID = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.AccountID = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.CreateDate = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.InforStr = new System.Windows.Forms.DataGridViewTextBoxColumn();
            ((System.ComponentModel.ISupportInitialize)(this.GatherDataGridView)).BeginInit();
            this.SuspendLayout();
            // 
            // GatherDataGridView
            // 
            this.GatherDataGridView.AllowUserToOrderColumns = true;
            this.GatherDataGridView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.GatherDataGridView.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.FlowID,
            this.TypeID,
            this.FlagID,
            this.AccountID,
            this.CreateDate,
            this.InforStr});
            this.GatherDataGridView.Dock = System.Windows.Forms.DockStyle.Fill;
            this.GatherDataGridView.Location = new System.Drawing.Point(0, 0);
            this.GatherDataGridView.Name = "GatherDataGridView";
            this.GatherDataGridView.RowTemplate.Height = 23;
            this.GatherDataGridView.Size = new System.Drawing.Size(871, 658);
            this.GatherDataGridView.TabIndex = 0;
            this.GatherDataGridView.VirtualMode = true;
            this.GatherDataGridView.CellValueNeeded += new System.Windows.Forms.DataGridViewCellValueEventHandler(this.GatherDataGridView_CellValueNeeded);
            // 
            // FlowID
            // 
            this.FlowID.HeaderText = "FlowID";
            this.FlowID.Name = "FlowID";
            this.FlowID.ReadOnly = true;
            // 
            // TypeID
            // 
            this.TypeID.HeaderText = "TypeID";
            this.TypeID.Name = "TypeID";
            this.TypeID.ReadOnly = true;
            // 
            // FlagID
            // 
            this.FlagID.HeaderText = "FlagID";
            this.FlagID.Name = "FlagID";
            this.FlagID.ReadOnly = true;
            // 
            // AccountID
            // 
            this.AccountID.HeaderText = "AccountID";
            this.AccountID.Name = "AccountID";
            this.AccountID.ReadOnly = true;
            // 
            // CreateDate
            // 
            this.CreateDate.HeaderText = "CreateDate";
            this.CreateDate.Name = "CreateDate";
            this.CreateDate.ReadOnly = true;
            // 
            // InforStr
            // 
            this.InforStr.HeaderText = "InforStr";
            this.InforStr.Name = "InforStr";
            this.InforStr.ReadOnly = true;
            // 
            // DataGridViewGatherForm
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 12F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(871, 658);
            this.Controls.Add(this.GatherDataGridView);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.Name = "DataGridViewGatherForm";
            this.Text = "数据采集【高级模式】";
            this.WindowState = System.Windows.Forms.FormWindowState.Maximized;
            this.FormClosing += new System.Windows.Forms.FormClosingEventHandler(this.DataGridViewGatherForm_FormClosing);
            this.Load += new System.EventHandler(this.DataGridViewGatherForm_Load);
            this.Shown += new System.EventHandler(this.DataGridViewGatherForm_Shown);
            ((System.ComponentModel.ISupportInitialize)(this.GatherDataGridView)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.DataGridView GatherDataGridView;
        private System.Windows.Forms.DataGridViewTextBoxColumn FlowID;
        private System.Windows.Forms.DataGridViewTextBoxColumn TypeID;
        private System.Windows.Forms.DataGridViewTextBoxColumn FlagID;
        private System.Windows.Forms.DataGridViewTextBoxColumn AccountID;
        private System.Windows.Forms.DataGridViewTextBoxColumn CreateDate;
        private System.Windows.Forms.DataGridViewTextBoxColumn InforStr;
    }
}