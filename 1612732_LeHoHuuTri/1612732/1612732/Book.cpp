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

void Book::setAuthor(string val)
{
	this->_author = val;
}

void Book::setPublisher(string val)
{
	this->_publisher = val;
}

string Book::getAuthor()
{
	return this->_author;
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

string Book::getPublisher()
{
	return this->_publisher;
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
	cout << "Author: ";
	getline(cin, _author);
	cout << "Publisher: ";
	getline(cin, _publisher);
}

void Book::outputBook()
{
	cout << "BOOK" << endl;
	cout << "\t\tName: " << _name << endl;
	cout << "\t\tID: " << _id << endl;
	cout << "\t\tPrice: " << _price << endl;
	cout << "\t\tAuthor: " << _author << endl;
	cout << "\t\tPublisher: " << _publisher << endl;
}

Book::Book(string name, string id, int price, string author, string publisher)
{
	_name = name;
	_id = id;
	_price = price;
	_author = author;
	_publisher = publisher;
}

Book::Book(const Book& other)
{
	_name = other._name;
	_id = other._id;
	_price = other._price;
	_author = other._author;
	_publisher = other._publisher;
}



Book::Book()
{
	this->_price = 0;
}

Book::~Book()
{
}

bool operator==(const Book& b1, const Book& b2)
{
	if (b1._name == b2._name && b1._id == b2._id && b1._price == b2._price && b1._author == b2._author && b1._publisher == b2._publisher)
		return true;
	return false;
}
