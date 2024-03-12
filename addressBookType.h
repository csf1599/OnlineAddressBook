#ifndef ADBT
#define ADBT
#include "extPersonType.h"
#include "orderedLinkedList.h"
#include <string>
#include <iostream>

using namespace std;

class addressBookType: public orderedLinkedList<extPersonType> {
public :
	void initEntry(string); // opens file and reads lines into variables that get turned into extPersonType obj
	void addEntry(extPersonType); // adds an extPersonType obj into array addressList
	void findPerson(string);
	void findBirthdays(int);
	void findRelations(string);
	void deleteEntry(string);
	void userAdd(extPersonType);
	void print();
private:
	orderedLinkedList<extPersonType> addList;
};
#endif
