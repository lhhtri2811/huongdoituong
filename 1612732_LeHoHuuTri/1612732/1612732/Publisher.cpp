#include "Publisher.h"

void Publisher::setName(string val)
{
	this->_name = val;
}

void Publisher::setPass(string val)
{
	this->_pass = val;
}

void Publisher::setSL(int val)
{
	this->_slBook = val;
}

string Publisher::getName()
{
	return this->_name;
}

string Publisher::getPass()
{
	return this->_pass;
}

int Publisher::getSL()
{
	return this->_slBook;
}

BookList Publisher::add(BookList list)
{
	string name, id, publisher, author;
	int price;

	cout << "Name: ";
	getline(cin, name);
	cout << "ID: ";
	getline(cin, id);
	cout << "Price: ";
	cin >> price;
	cin.ignore();
	cout << "Author: ";
	getline(cin, author);

	publisher = this->getName();

	Book newBook(name, id, price, author, publisher);

	list.add(newBook);

	return list;
}

BookList Publisher::del(BookList list)
{
	Book result(list.searchBook());
	vector<Book> ls = list.getBookList();
	BookList newList(ls);
	if (_name != result.getPublisher())
	{
		cout << "Ban khong co quyen xoa sach nay" << endl;
		return newList;
	}
	else
	{

		int vitri = 0;
		for (int i = 0; i < ls.size(); i++)
		{
			if (ls[i] == result)
				vitri += i;

		}
		ls.erase(ls.begin() + vitri);
		BookList newList2(ls);
		return newList2;
	}
}

BookList Publisher::update(BookList list)
{
	Book result(list.searchBook());
	if (_name != result.getPublisher())
	{
		cout << "Ban khong co quyen sua sach nay" << endl;
		return list;
	}
	else
	{
		vector<Book> ls = list.getBookList();


		int vitri = 0;
		for (int i = 0; i < ls.size(); i++)
		{
			if (ls[i] == result)
				vitri += i;

		}

		string s1 = ls[vitri].getName();
		string s2 = ls[vitri].getID();
		string s3 = ls[vitri].getAuthor();
		string s4 = ls[vitri].getPublisher();
		int newPrice;
		cout << "Nhap gia moi: ";
		cin >> newPrice;
		cin.ignore();
		Book newBook(s1, s2, newPrice, s3, s4);
		ls[vitri] = newBook;

		BookList newList(ls);
		return newList;
	}
}

BookList Publisher::edit(BookList list)
{
	vector<Book> ls = list.getBookList();
	BookList newList(ls);

	int option;
	do
	{
		cout << "1 - ADD == 2 - DELETE == 3 - UPDATE PRICE == 4 - EXIT	" << endl;
		cin >> option;
		cin.ignore();
		if (option == 4) return newList;
		else if (option == 1) newList = add(newList);
		else if (option == 2) newList = del(newList);
		else if (option == 3) newList = update(newList);
	} while (option == 1 || option == 2 || option == 3);


	return newList;
}

Publisher::Publisher()
{
	this->_slBook = 0;
}

Publisher::Publisher(string name, string pass, int slBook)
{
	this->_name = name;
	this->_pass = pass;
	this->_slBook = slBook;
}

Publisher::~Publisher()
{

}
