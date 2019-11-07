#include "Bill.h"

void Bill::buy(BookList list)
{
	_book = Book(list.searchBook());
	cout << "Nhap so luong sach muon mua: ";
	cin >> _quanity;
	_total = _quanity * _book.getPrice();
}

void Bill::outputBill()
{
	cout << "BILL" << endl;
	cout << "\t\tName: " << _book.getName() << endl;
	cout << "\t\tID: " << _book.getID() << endl;
	cout << "\t\tPrice: " << _book.getPrice() << endl;
	cout << "\t\tQuanity: " << _quanity << endl;
	cout << "\t\tTotal: " << _total << endl;
}

int Bill::getTotal()
{
	return _total;
}

int Bill::getQuanity()
{
	return _quanity;
}

Bill Bill::editQuanityBook()
{
	Bill newBill;
	int sl;
	cout << "Nhap lai so luong sach: ";
	cin >> sl;
	cin.ignore();
	newBill._book = Book(this->_book);
	newBill._quanity = sl;
	newBill._total = sl * this->_book.getPrice();
	return newBill;
}

string Bill::getNameofBook()
{
	return _book.getName();
}

void Bill::setQuanity(int val)
{
	this->_quanity = val;
}

void Bill::setTotal(int val)
{
	this->_total = val;
}

int Bill::getPriceOfBook()
{
	return this->_book.getPrice();
}

Bill::Bill(const Bill& other)
{
	this->_book = Book(other._book);
	this->_quanity = other._quanity;
	this->_total = other._total;
}

Bill::Bill()
{
	this->_quanity = 0;
	this->_total = 0;
}

Bill::~Bill()
{
}
