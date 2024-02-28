// Address Book Project by Caleb Frazier

#include <iostream>
#include <string>
#include "addressBookType.h"



using namespace std;
int main()
{
	addressBookType test;
	test.initEntry("AddressBookData.txt");
	//test.sortEntries();
	test.print();
}