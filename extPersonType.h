#ifndef EPRN
#define ERPN
#include <iostream>
#include <string>
#include "personType.h"
#include "addressType.h"
#include "dateType.h"
#include "orderedLinkedList.h"

using namespace std;
class extPersonType : public personType{
public:
	string relationCheck(string); // preconditions : users relationship input , postconditions : returns users input or "None"
	void setPhoneNumber(string); // preconditions : none , postconditions : sets phoneNumber
	void setRelationship(string); // preconditions : none , postconditions : sets relationship
	string getPhoneNumber(); // preconditions : none , postconditions : returns phoneNumber
	string getRelationship(); // preconditions : none , postconditions : returns relationship
	int getBirthMonth(); // preconditions : none , postconditions : returns month of birthDate
	void print(); // preconditions : none , postconditions : outputs entire extPersonType to console in the specified format
	extPersonType(string = "", string = "", int = 1, int = 1, int = 1900,
		string = "", string = "", string = "XX", int = 10000, string = "None", string = "None");
	bool operator==(const extPersonType&)const;
	bool operator!=(const extPersonType&)const;
	bool operator>=(const extPersonType&)const;
private:
	addressType address;
	dateType birthDate;
	string phoneNumber;
	string relationship;
	string nameKey;

};

#endif