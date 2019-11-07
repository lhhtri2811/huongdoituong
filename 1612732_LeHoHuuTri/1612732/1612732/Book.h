#pragma once
#include<iostream>
using namespace std;
#include <string>
class Book
{
private:
	string _name;
	string _id;
	int _price;
public:
	void setName(string value);
	void setID(string value);
	void setPrice(int value);
	string getName();
	string getID();
	int getPrice();
	void inputBook();
	void outputBook();
public:
	Book(string name, string id, int price);
	Book(const Book&);
	Book();
	~Book();

};

