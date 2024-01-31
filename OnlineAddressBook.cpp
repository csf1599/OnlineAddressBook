// Address Book Project by Caleb Frazier

#include <iostream>
#include "addressType.h"

using namespace std;

int main()
{
	cout << "Testing Default constructor.\n";
	addressType defAddress;
	defAddress.print();
	cout << "\nTesting address with parameters.\n";
	addressType address("123 South Street", "Newport News", "VA", 23664);
	address.print();
	cout << "\nTesting invalid state (Virginia)... \n";
	address.setState("Virginia");
	address.print();
	cout << "\nTesting invalid zipcode (55555555)..." << endl;
	address.setZipcode(55555555);
	address.print();
	cout << endl;
	cout << "Testing valid address ..." << endl;
	address.setAddress("44 East Main Street");
	address.setCity("Hampton");
	address.setState("VA");
	address.setZipcode(23669);
	address.print();
	cout << endl;
}