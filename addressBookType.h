#ifndef ADBT
#define ADBT
#include "extPersonType.h"
#include <string>
#include <iostream>

using namespace std;

class addressBookType {
public :
	void initEntry(string);
	void addEntry(extPersonType);
	void findPerson(string);
	void findBirthdays(int);
	void findRelations(string);
	void print();
	void sortEntries();
private :
	extPersonType addressList[500];
	int length;
	int max_length;
};
#endif
