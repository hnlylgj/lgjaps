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
    public partial class DataGridViewAccountForm : Form
    {

        public int RowInEdit = -1;
        public VisAccount VisAccountEdit = null;

        public DataGridViewAccountForm()
        {
            InitializeComponent();
        }

        public void SetDataGridView()
        {
            //AccountDataGridView.RowCount= RowCount+1;
            //this.Refresh();

            AccountDataGridView.RowCount = MainForm.MyListVisAccount.Count + 1;
        }


        private void AccountDataGridView_CellValueNeeded(object sender, DataGridViewCellValueEventArgs e)
        {
            VisAccount TempVisAccount;

            if (e.RowIndex== AccountDataGridView.RowCount-1)
            {
                return;

            }

            if (e.RowIndex == RowInEdit)
            {
                TempVisAccount = VisAccountEdit;

            }
            else
            {
                TempVisAccount = MainForm.MyListVisAccount[e.RowIndex];
            }

            switch(AccountDataGridView.Columns[e.ColumnIndex].Name)
            {
                case "AccountID":
                    e.Value = TempVisAccount.AccountID;
                    break;
                case "LoginName":
                    e.Value = TempVisAccount.LoginName;
                    break;
                case "PassWord":
                    e.Value = TempVisAccount.PassWord;
                    break;
                case "MobileID":
                    e.Value = TempVisAccount.MobileID;
                    break;
                case "CreateDate":
                    e.Value = TempVisAccount.CreateDate;
                    break;
               
                case "DeviceID":
                    e.Value = TempVisAccount.DeviceID;
                    break;
                case "CarID":
                    e.Value = TempVisAccount.CarID;
                    break;
                case "Login":
                    e.Value = TempVisAccount.Login;
                    break;


            }


        }

        private void DataGridViewForm_Load(object sender, EventArgs e)
        {
            AccountDataGridView.RowCount = MainForm.MyListVisAccount.Count + 1;

        }

        private void DataGridViewForm_Shown(object sender, EventArgs e)
        {

        }

        private void DataGridViewAccountForm_FormClosing(object sender, FormClosingEventArgs e)
        {
            e.Cancel = true;
            this.Visible = false;
        }
    }
}
