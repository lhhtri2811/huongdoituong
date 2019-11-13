// 1612732.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"Book.h"
#include"BookList.h"
#include"Bill.h"
#include"BillList.h"
#include"Guest.h"
#include"User.h"
#include"Author.h"
#include"Publisher.h"
int main()
{
	//tuan 2
	//Book book;
	//book.setName("Co so du lieu");
	//book.setID("s001");
	//book.setPrice(78000);
	//cout << "Name: " << book.getName() << endl;
	//cout << "ID: " << book.getID() << endl;
	//cout << "Price: " << book.getPrice() << endl;

	//tao list
	Book book1("Huong doi tuong", "s1", 23000, "Le Ho Huu Tri", "Kim dong");
	Book book2("Huong doi tuong", "s2", 45000, "Le Ho Huu Tri", "Giao duc");
	Book book3("Nhap mon lap trinh", "s3", 56000, "Dang Binh Phuong", "Kim dong");
	Book book4("Co so du lieu", "s4", 67000, "Dang Binh Phuong", "Giao duc");
	Book book5("Ky thuat lap trinh", "s5", 80000, "Le Ho Huu Tri", "Kim dong");
	Book book6("Nhap mon thuat toan", "s6", 90000, "Le Ho Huu Tri", "Kim dong");
	vector<Book> ls;
	ls.push_back(book1);
	ls.push_back(book2);
	ls.push_back(book3);
	ls.push_back(book4);
	ls.push_back(book5);
	ls.push_back(book6);
	BookList list(ls);
	list.outputListBook();
	
	//tuan 3
	//list.delete_update_book();

	//tuan 4
	/*BillList billLS;
	billLS.buy(list);*/

	//tuan 6
	/*BillList billLS;
	billLS.buy(list);
	billLS.editQuanityBill(list);*/

	//tuan 7
	/*Guest guest1;
	Book result = guest1.search(list);
	result.outputBook();
	int option;
	cout << "1 - Mua == 2 - Thoat" << endl;
	cin >> option;
	cin.ignore();
	if (option == 2)
	{
		exit(1);
	}
	else if (option == 1)
	{
		User user1;
		bool temp = user1.login();
		if (temp == true)
		{
			cout << "Login thanh cong" << endl;
			user1.buy(list).outputBillList();
		}

	}*/
	
	//tuan 8
	Author author("Le Ho Huu Tri", "spectertri", 0);
	//author.add(list).outputListBook();
	//author.del(list).outputListBook();
	//author.update(list).outputListBook(); 
	//author.edit(list).outputListBook();
	Publisher pub("Kim dong", "spectertri", 0);
	pub.edit(list).outputListBook();
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
