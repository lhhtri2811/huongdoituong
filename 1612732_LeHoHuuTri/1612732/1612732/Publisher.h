#pragma once
#include"Author.h"
class Publisher
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
	Publisher();
	Publisher(string name, string pass, int slBook);
	~Publisher();
};

