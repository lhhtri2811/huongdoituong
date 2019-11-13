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
	string _author;
	string _publisher;
public:
	void setName(string value);
	void setID(string value);
	void setPrice(int value);
	void setAuthor(string val);
	void setPublisher(string val);
	string getAuthor();
	string getName();
	string getID();
	int getPrice();
	string getPublisher();
	void inputBook();
	void outputBook();
	friend bool operator==(const Book& b1, const Book& b2);
public:
	Book(string name, string id, int price, string author, string publisher);
	Book(const Book&);
	Book();
	~Book();

};

