// Address Book Project by Caleb Frazier

#include <iostream>
#include <string>
#include "addressBookType.h"
#include <stdlib.h>



using namespace std;
int showMenu(addressBookType addBook) {
	int choice = 0;
	string uName, uRel, nFName, nLName, nADD, nCTY, nST, nPNUM, nRel, nKey;
	int bMon, nZIP,nBM,nBD,nBY;
	while(choice!=7) {
		cout << "Welcome To Your Very Own Address Book\n";
		cout << "Would You like to : " << endl;
		cout << "Print The Address Book? - 1 " << endl;
		cout << "Find A Person By Last Name? - 2 " << endl;
		cout << "Find A Person By Birth Month? - 3 " << endl;
		cout << "Find A Person By Relationship? - 4 " << endl;
		cout << "Add An Entry? - 5 " << endl;
		cout << "Delete An Entry? - 6" << endl;
		cout << "Exit The Address Book? - 7" << endl;
		cout << "Please Enter Choice : ";
		cin >> choice;
		cin.ignore(1);
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
		case 5:
			cout << "Please Enter First Name : " << endl;
			getline (cin , nFName);
			cout << endl;
			cout << "Please Enter Last Name : " << endl;
			cin >> nLName;
			cout << endl;
			cout << "Please Enter Birth Month : " << endl;
			cin >> nBM;
			cout << endl;
			cout << "Please Enter Birth Day : " << endl;
			cin >> nBD;
			cout << endl;
			cout << "Please Enter Birth Year : " << endl;
			cin >> nBY;
			cin.ignore(1);
			cout << endl;
			cout << "Please Enter Address : " << endl;
			getline(cin, nADD);
			cout << endl;
			cout << "Please Enter City : " << endl;
			cin >> nCTY;
			cout << endl;
			cout << "Please Enter Sate : " << endl;
			cin >> nST;
			cout << endl;
			cout << "Please Enter ZipCode : " << endl;
			cin >> nZIP;
			cout << endl;
			cout << "Please Enter Phone Number As ###-###-#### : " << endl;
			cin >> nPNUM;
			cout << endl;
			cout << "Please Enter Relationship : " << endl;
			cin >> nRel;
			cout << endl;
			addBook.userAdd(extPersonType(nFName, nLName, nBM, nBD, nBY, nADD, nCTY, nST, nZIP, nPNUM, nRel));
			break;
		case 6:
			cout << "Please Enter First and Last name seperated by a space : " << endl;
			getline(cin, nKey);
			addBook.deleteEntry(nKey);
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
	client();
}