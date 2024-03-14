#ifndef ADBT
#define ADBT
#include "extPersonType.h"
#include "orderedLinkedList.h"
#include <string>
#include <iostream>

using namespace std;

class addressBookType: public orderedLinkedList<extPersonType> , public extPersonType{
public :
	void initEntry(string); // opens file and reads lines into variables that get turned into extPersonType obj
	void addEntry(extPersonType); // adds an extPersonType obj into ordered linked list
	void findPerson(string); // finds a person based on nameKey and prints that persons information	
	void findBirthdays(int); // finds a person based on their birthday and prints their information
	void findRelations(string); // finds people
	void deleteEntry(string); // deletes information from linked list based on nameKey (first and last name concatinated)
	void userAdd(extPersonType); // adds new information to linked list
	void reInit(string); // writes new address book information to file
	void print();
private:
	orderedLinkedList<extPersonType> addList;
};
#endif
