// Address Book Project by Caleb Frazier

#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

int main()
{
	personType test("James", "Evil");
	cout << test.getLastName();
}