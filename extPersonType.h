#ifndef EPRN
#define ERPN
#include <iostream>
#include <string>
#include "personType.h"
#include "addressType.h"
#include "dateType.h"

using namespace std;
class extPersonType : public personType{
public:
	string relationCheck(string);
	void setPhoneNumber(string);
	void setRelationship(string);
	string getPhoneNumber();
	string getRelationship();
	int getBirthMonth();
	void print();
	extPersonType(string = "", string = "", int = 1, int = 1, int = 1900,
		string = "", string = "", string = "XX", int = 10000, string = "None", string = "None");
private:
	addressType address;
	dateType birthDate;
	string phoneNumber;
	string relationship;


};

#endif