// Address Book Project by Caleb Frazier

#include <iostream>
#include <string>
#include "addressBookType.h"
#include <stdlib.h>



using namespace std;
int showMenu(addressBookType addBook) {
	int choice = 0;
	string uName, uRel;
	int bMon;
	while(choice!=5) {
		cout << "Welcome To Your Very Own Address Book\n";
		cout << "Would You like to : " << endl;
		cout << "Print The Address Book? - 1 " << endl;
		cout << "Find A Person By Last Name? - 2 " << endl;
		cout << "Find A Person By Birth Month? - 3 " << endl;
		cout << "Find A Person By Relationship? - 4 " << endl;
		cout << "Exit The Address Book? - 5 " << endl;
		cout << "Please Enter Choice : ";
		cin >> choice;
		cout << endl;
		system("CLS");
		switch (choice) {
		case 1:
			addBook.print();
			break;
		case 2:
			cout << "Enter Last Name : ";
			cin >> uName;
			addBook.findPerson(uName);
			cout << endl;
			break;
		case 3:
			cout << "Enter Birth Month : ";
			cin >> bMon;
			addBook.findBirthdays(bMon);
			cout << endl;
			break;
		case 4:
			cout << "Enter Relationship : ";
			cin >> uRel;
			addBook.findRelations(uRel);
			cout << endl;
			break;
		}
	}
	cout << "Bye Bye!" << endl;
	return 0;
}
void client() {
	addressBookType test;
	test.initEntry("AddressBookData.txt");
	showMenu(test);
}
int main()
{
	//client();
	/*addressBookType test;
	test.initEntry("AddressBookData.txt");
	test.print();*/
	addressBookType test;
	test.initEntry("AddressBookData.txt");
	test.print();
	test.deleteEntry("Chelsea Tomak");
	cout << endl;
	test.print();
	cout << endl;
	test.userAdd(extPersonType("Caleb", "Frazier", 12, 31, 2001, "204 Walden Drive", "Yorktown", "VA", 23692, "(803)468-5002", "Friend"));
	test.print();

}