#pragma once
#include"Book.h"
#include<vector>
class BookList
{
private:
	vector<Book> _bookList;
	//int _sizeList;
public:
	void inputListBook();
	void outputListBook();
	void delete_update_book();
	Book searchBook();
	void setBookList(vector<Book> list);
	vector<Book> getBookList();
	void add(Book book);
	int getSize();
public:
	BookList(const vector<Book>&);
	BookList();
	~BookList();
};

