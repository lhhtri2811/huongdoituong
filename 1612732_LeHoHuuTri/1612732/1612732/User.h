#pragma once
#include "Guest.h"
class User :
	public Guest
{
private:
	string _name;
	int _age;
	string _password;
public:
	void setName(string val);
	void setAge(int val);
	void setPassword(string val);
	string getName();
	int getAge();
	string getPassword();
	bool login();
	BillList buy(BookList list);
public:
	User();
	~User();
};

