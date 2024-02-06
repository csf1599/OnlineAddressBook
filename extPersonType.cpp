#include "extPersonType.h"
#include <iostream>
#include <string>

using namespace std;

extPersonType::extPersonType(string first, string last, int bMonth, int bDay, int bYear,
	string address, string city, string state, int zipcode, string phoneNum, string relation) 
	:personType (first,last), birthDate(bMonth, bDay, bYear) , address(address, city, state, zipcode) {
	phoneNumber = phoneNum;
	relationship = relationCheck(relation);
}
void extPersonType::setPhoneNumber(string pNum) {
	phoneNumber = pNum;
}
void extPersonType::setRelationship(string relation) {
	relationship = relationCheck(relation);
}
string extPersonType::getPhoneNumber() {
	return phoneNumber;
}
string extPersonType::getRelationship() {
	return relationCheck(relationship);
}
int extPersonType::getBirthMonth() {
	return birthDate.getMonth();
}
void extPersonType::print() {
	personType::print();
	cout << "\n";
	birthDate.print();
	address.print();
	cout << phoneNumber << "\n" << relationship << "\n";
}
string extPersonType::relationCheck(string relation) {
	if (relation == "Family" || relation == "Friend" || relation == "Business") {
		return relation;
	}
	else {
		return "None";
	}
}