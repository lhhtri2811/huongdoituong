#pragma once
#include"BookList.h"
class Bill
{
private:
	Book _book;
	int _quanity;
	int _total;
public:
	void buy(BookList list);
	void outputBill();
	int getTotal();
	int getQuanity();
	Bill editQuanityBook();
	string getNameofBook();
	void setQuanity(int val);
	void setTotal(int val);
	int getPriceOfBook();
public:
	Bill(const Bill&);
	Bill();
	~Bill();
};

