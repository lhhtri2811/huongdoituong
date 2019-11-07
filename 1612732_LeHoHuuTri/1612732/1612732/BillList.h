#pragma once
#include"Bill.h"
class BillList
{
private:
	vector<Bill> _billList;
	//int _sizeListBill;
public:
	void buy(BookList list);
	void outputBillList();
	void editQuanityBill(BookList list);
public:
	BillList(const vector < Bill>&);
	BillList();
	~BillList();
};

