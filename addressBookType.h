#ifndef ADBT
#define ADBT
#include "extPersonType.h"
#include <string>
#include <iostream>

using namespace std;

class addressBookType {
public :
	void initEntry(string); // opens file and reads lines into variables that get turned into extPersonType obj
	void addEntry(extPersonType); // adds an extPersonType obj into array addressList
	void findPerson(string);
	void findBirthdays(int);
	void findRelations(string);
	void print();
	void sortEntries();
private :
	extPersonType addressList[500];
	int length = 0;
	int max_length;
};
#endif
