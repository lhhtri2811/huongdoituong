#pragma once
#include"User.h"
class Author
{
private:
	string _name;
	string _pass;
	int _slBook;
public:
	void setName(string val);
	void setPass(string val);
	void setSL(int val);
	string getName();
	string getPass();
	int getSL();
	BookList add(BookList list);
	BookList del(BookList list);
	BookList update(BookList list);
	BookList edit(BookList list);
public:
	Author();
	Author(string name, string pass, int slBook);
	~Author();
};

