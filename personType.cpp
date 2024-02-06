#include <iostream>
#include <string>
#include "personType.h"

using namespace std;

personType::personType(string first, string last) {
	first_name = first;
	last_name = last;
}
void personType::setFirstName(string first) {
	first_name = first;
}
string personType::getFirstName() {
	return first_name;
}
void personType::setLastName(string last) {
	last_name = last;
}
string personType::getLastName() {
	return last_name;
}
void personType::print() {
	cout << first_name << "," << last_name;
}