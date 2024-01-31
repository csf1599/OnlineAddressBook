// Address Book Project by Caleb Frazier

#include <iostream>
#include "addressType.h"

using namespace std;

int main()
{
    addressType test;
    test.setAddress("308 Negra Arroyo Lane");
    test.setCity("Albuquerque");
    test.setState("NM");
    test.setZipcode(87104);
    test.print();
    cout << "Hello World!\n";
}