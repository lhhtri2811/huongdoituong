#include "Book.h"

void Book::setName(string value)
{
	_name = value;
}

void Book::setID(string value)
{
	_id = value;
}

void Book::setPrice(int value)
{
	_price = value;
}

string Book::getName()
{
	return _name;
}

string Book::getID()
{
	return _id;
}

int Book::getPrice()
{
	return _price;
}

void Book::inputBook()
{
	cout << "Name: ";
	getline(cin, _name);
	//cin.ignore();
	cout << "ID: ";
	getline(cin, _id);
	//cin.ignore();
	cout << "Price: ";
	cin >> _price;
	//cin.ignore();
}

void Book::outputBook()
{
	cout << "BOOK" << endl;
	cout << "\t\tName: " << _name << endl;
	cout << "\t\tID: " << _id << endl;
	cout << "\t\tPrice: " << _price << endl;
}

Book::Book(string name, string id, int price)
{
	_name = name;
	_id = id;
	_price = price;
}

Book::Book(const Book& other)
{
	_name = other._name;
	_id = other._id;
	_price = other._price;
}



Book::Book()
{
	this->_price = 0;
}

Book::~Book()
{
}
