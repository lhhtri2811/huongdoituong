#include "User.h"

void User::setName(string val)
{
	this->_name = val;
}

void User::setAge(int val)
{
	this->_age = val;
}

void User::setPassword(string val)
{
	this->_password = val;
}

string User::getName()
{
	return this->_name;
}

int User::getAge()
{
	return this->_age;
}

string User::getPassword()
{
	return this->_password;
}

bool User::login()
{
	string userName, pass;
	cout << "Username: ";
	getline(cin, userName);
	cout << "Password: ";
	getline(cin, pass);

	while (userName != "abc" || pass != "123")
	{
		cout << "Username hoac pass sai! Nhap lai!" << endl;
		cout << "Username: ";
		getline(cin, userName);
		cout << "Password: ";
		getline(cin, pass);
	}
	return true;
}

BillList User::buy(BookList list)
{
	vector<Bill> ls;
	int option;
	do
	{
		Bill bill;
		bill.buy(list);
		ls.push_back(bill);
		cout << "1 Mua tiep - 2 Thoat" << endl;
		cin >> option;
		cin.ignore();
		if (option == 2)
		{
			break;
		}
	} while (option == 1);

	BillList newBillList = BillList(ls);


	return newBillList;
}

User::User()
{
	this->_age = 1;
}

User::~User()
{

}
