using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace CloudServiceHostApp
{
    public partial class DataGridViewGatherForm : Form
    {
        public List<VisGather> MySortedListVisGather = new List<VisGather>();
        public int RowInEdit = -1;
        public VisGather VisGatherEdit = null;

        public DataGridViewGatherForm()
        {
            InitializeComponent();
        }
        public void SetDataGridView()
        {

            //排序输出
            int p = MainForm.MyListVisGather.Count;
            VisGather[] VisGatherArray = new VisGather[p];
            MySortedListVisGather.Clear();
            for (int i = 0; i < p; i++)
            {
                VisGatherArray[i] = MainForm.MyListVisGather[p - i - 1];

            }
            MySortedListVisGather.AddRange(VisGatherArray);


            GatherDataGridView.RowCount = VisGatherArray.Length + 1;

            int m = VisGatherArray.Length;
            GatherDataGridView.CurrentCell = GatherDataGridView[0, 0];
            GatherDataGridView.Rows[0].Selected = true;
            GatherDataGridView.Refresh();
            //this.Refresh();

        }



        private void GatherDataGridView_CellValueNeeded(object sender, DataGridViewCellValueEventArgs e)
        {
            VisGather TempVisGather;

            if (e.RowIndex == GatherDataGridView.RowCount - 1)
            {
                return;

            }

            if (e.RowIndex == RowInEdit)
            {
                TempVisGather = VisGatherEdit;

            }
            else
            {
                TempVisGather = MySortedListVisGather[e.RowIndex];
            }

            switch (GatherDataGridView.Columns[e.ColumnIndex].Name)
            {
                case "FlowID":
                    e.Value = TempVisGather.FlowID;
                    break;
                case "TypeID":
                    e.Value = TempVisGather.TypeID;
                    break;
                case "FlagID":
                    e.Value = TempVisGather.FlagID;
                    break;
                case "AccountID":
                    e.Value = TempVisGather.AccountID;
                    break;
                case "CreateDate":
                    e.Value = TempVisGather.CreateDate;
                    break;

                case "InforStr":
                    e.Value = TempVisGather.InforStr;
                    break;


            }


        }

        private void DataGridViewGatherForm_Load(object sender, EventArgs e)
        {
            //排序输出

            SetDataGridViewStyles2();

            int p = MainForm.MyListVisGather.Count;
            VisGather[] VisGatherArray = new VisGather[p];
            MySortedListVisGather.Clear();
            for (int i = 0; i < p; i++)
            {
                VisGatherArray[i] = MainForm.MyListVisGather[p - i - 1];

            }
            MySortedListVisGather.AddRange(VisGatherArray);

            GatherDataGridView.RowCount = VisGatherArray.Length + 1;
            if (VisGatherArray.Length > 0)
            {
                //GatherDataGridView.Rows[0].Selected = true;
                GatherDataGridView.CurrentCell = GatherDataGridView[0, 0];
                GatherDataGridView.Refresh();

            }
            //GatherDataGridView.Sort(GatherDataGridView.Columns[0], ListSortDirection.Descending);
        }

        private void DataGridViewGatherForm_Shown(object sender, EventArgs e)
        {

        }

        private void DataGridViewGatherForm_FormClosing(object sender, FormClosingEventArgs e)
        {
            e.Cancel = true;
            this.Visible = false;
        }
        private void SetDataGridViewStyles()
        {
            //设置单元格自动宽
            //GatherDataGridView.DefaultCellStyle.WrapMode = DataGridViewTriState.True;
            //GatherDataGridView.DefaultCellStyle.ForeColor = Color.White;
            //GatherDataGridView.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.ColumnHeader;
            //设置字体大小
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle1 = new System.Windows.Forms.DataGridViewCellStyle();
            dataGridViewCellStyle1.Font = new System.Drawing.Font("微软雅黑", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            GatherDataGridView.RowsDefaultCellStyle = dataGridViewCellStyle1;
            GatherDataGridView.ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;

            GatherDataGridView.AutoGenerateColumns = false;
            //设置列填充满区域
            GatherDataGridView.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.Fill;
            GatherDataGridView.AllowUserToResizeColumns = false;
            GatherDataGridView.AllowUserToResizeRows = false;

            //GatherDataGridView.BackImage = Image.FromFile(@"C:\Users\Administrator\Desktop\网格背景.jpg");
            //设置cell背景透明
            GatherDataGridView.ColumnHeadersDefaultCellStyle.BackColor = Color.Transparent;
            GatherDataGridView.ColumnHeadersDefaultCellStyle.ForeColor = Color.White;
            GatherDataGridView.ColumnHeadersDefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;
            //加上这句前面的才起作用
            GatherDataGridView.EnableHeadersVisualStyles = false;

            GatherDataGridView.DefaultCellStyle.BackColor = Color.Transparent;
            GatherDataGridView.DefaultCellStyle.ForeColor = Color.White;
            GatherDataGridView.SelectionMode = DataGridViewSelectionMode.FullRowSelect;
            GatherDataGridView.RowHeadersVisible = false;
            GatherDataGridView.RowsDefaultCellStyle.Alignment = DataGridViewContentAlignment.MiddleCenter;

            //GatherDataGridView.ReadOnly = true;

        }
        private void SetDataGridViewStyles2()
        {
            #region DataGridVeiw Style
                     
            GatherDataGridView.AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode.None;

            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle1 = new System.Windows.Forms.DataGridViewCellStyle();
            System.Windows.Forms.DataGridViewCellStyle dataGridViewCellStyle2 = new System.Windows.Forms.DataGridViewCellStyle();
            this.GatherDataGridView.AllowUserToAddRows = false;
            this.GatherDataGridView.AllowUserToDeleteRows = false;
            this.GatherDataGridView.Font= new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            dataGridViewCellStyle1.BackColor = System.Drawing.Color.LightCyan;
          
            this.GatherDataGridView.AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
            this.GatherDataGridView.BackgroundColor = System.Drawing.Color.DarkSeaGreen;
            this.GatherDataGridView.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.GatherDataGridView.ColumnHeadersBorderStyle = System.Windows.Forms.DataGridViewHeaderBorderStyle.Single;


            dataGridViewCellStyle2.Alignment = System.Windows.Forms.DataGridViewContentAlignment.MiddleCenter;//211, 223, 240
            dataGridViewCellStyle2.BackColor = System.Drawing.Color.FromArgb(((int)(((byte)(211)))), ((int)(((byte)(223)))), ((int)(((byte)(240)))));
            dataGridViewCellStyle2.Font = new System.Drawing.Font("宋体", 12F, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, ((byte)(134)));
            dataGridViewCellStyle2.ForeColor = System.Drawing.Color.Navy;
            dataGridViewCellStyle2.SelectionBackColor = System.Drawing.SystemColors.Highlight;
            dataGridViewCellStyle2.SelectionForeColor = System.Drawing.SystemColors.HighlightText;
            this.GatherDataGridView.ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
            this.GatherDataGridView.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            //this.GatherDataGridView.EnableHeadersVisualStyles = false;
            this.GatherDataGridView.GridColor = System.Drawing.SystemColors.GradientInactiveCaption;
            //this.GatherDataGridView.ReadOnly = true;
            //this.GatherDataGridView.RowHeadersVisible = false;
            this.GatherDataGridView.RowTemplate.Height = 23;
            //this.GatherDataGridView.RowTemplate.ReadOnly = true;
            #endregion

        }
    }
}
