#include "BillList.h"
#include<math.h>
void BillList::buy(BookList list)
{
	int option;
	do
	{
		Bill bill;
		bill.buy(list);
		_billList.push_back(bill);
		cout << "1 Mua tiep - 2 Thoat" << endl;
		cin >> option;
		cin.ignore();
		if (option == 2)
		{
			break;
		}
	} while (option==1);
	outputBillList();
}

void BillList::outputBillList()
{
	cout << "\t\t\t\t\tBILL LIST" << endl;
	int total = 0;
	for (int i = 0; i < _billList.size(); i++)
	{
		_billList[i].outputBill();
		total += _billList[i].getTotal();
	}
	cout << "\t\t\t\t\t\t\t\t\tTOTAL: " << total << endl;
}

void BillList::editQuanityBill(BookList list)
{
	do
	{
		int option;
		do
		{
			cout << "1 - Add Bill === 2 - Delete Bill === 3 - Edit Bill === 4 - Exit" << endl;
			cin >> option;
			cin.ignore();
			if (option != 1 && option != 2 && option != 3 && option != 4)
			{
				cout << "ERROR!!!" << endl << "Vui long nhap lai" << endl;
			}
		} while (option != 1 && option != 2 && option != 3 && option != 4);

		//Add Bill
		if (option == 1)
		{
			Bill newBill;
			newBill.buy(list);
			_billList.push_back(newBill);
			//return *this;
			this->outputBillList();
		}

		//Delete Bill
		else if (option == 2)
		{
			string ten;
			cout << "Nhap ten sach trong hoa don: ";
			getline(cin, ten);

			int vitri = 0;

			//duyet qua bill list
			for (int i = 0; i < _billList.size(); i++)
			{
				if (_billList[i].getNameofBook() == ten)
				{
					vitri += i;//lay vi tri hoa don mua sach ma nguoi dung nhap
				}
			}

			_billList.erase(_billList.begin() + vitri);
			//return *this;
			this->outputBillList();
		}
		//edit bill
		else if (option == 3)
		{
			string ten;
			cout << "Nhap ten sach muon chinh sua: ";
			getline(cin, ten);
			for (int i = 0; i < _billList.size(); i++)
			{
				if (_billList[i].getNameofBook() == ten)
				{
					/*Bill newBill = Bill(_billList[i].editQuanityBook());
					_billList.push_back(newBill);*/
					int newQty;
					cout << "Nhap so luong: ";
					cin >> newQty;
					cin.ignore();
					_billList[i].setQuanity(newQty);
					_billList[i].setTotal(newQty * _billList[i].getPriceOfBook());
				}
				
			}
			//return *this;
			this->outputBillList();
		}

		//exit
		else if (option == 4)
		{
			this->outputBillList();
			exit(1);
		}
		
	} while (true);
	//return *this;
}

BillList::BillList(const vector<Bill>& other)
{
	this->_billList = other;
}

BillList::BillList()
{

}

BillList::~BillList()
{

}
