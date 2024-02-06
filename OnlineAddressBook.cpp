// Address Book Project by Caleb Frazier

#include <iostream>
#include <string>
#include "extPersonType.h"


using namespace std;

int main()
{
	extPersonType person("George", "Smith", 4, 30, 1994, "145 South Street, Apt.5", "Hampton", "VA", 23554, "757 - 444 - 5555", "Friend");
	person.print();
}