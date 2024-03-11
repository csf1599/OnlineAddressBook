#include "addressBookType.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void addressBookType::initEntry(string filename) {
	string f_name, l_name, add, cty, st, p_num, rel;
	int mon, day, yr, zip;
	int count = 0;
	ifstream inFile;
	inFile.open(filename);
	if (!inFile.is_open()) {
		cout << "Could not open file.\n";
	}
	while (inFile >> f_name) {
		inFile >> l_name >> mon >> day >> yr;
		inFile.ignore();
		getline(inFile, add);
		getline(inFile, cty);
		inFile >> st >> zip >> p_num >> rel;
		extPersonType entry = extPersonType(f_name, l_name, mon, day, yr, add, cty, st, zip,  p_num, rel);
		addEntry(entry);
		count++;
	}

}
void addressBookType::addEntry(extPersonType entry){
	nodeType<extPersonType>* newNode = new nodeType<extPersonType>;
	newNode->info = entry;
	newNode->link = nullptr;
	this->insert(newNode->info);
}

void addressBookType::print() {
	nodeType <extPersonType> *current;
	current = first;
	while (current != NULL) {
		current->info.ext_print();
		current = current->link;
	}
	
}
void addressBookType::findPerson(string lastNA) {
	/*for (int i = 0; i < length; i++) {
		if (addressList[i].getLastName() == lastNA) {
			addressList[i].print();
		}
	}*/

}
void addressBookType::findBirthdays(int b_month) {
	/*for (int i = 0; i < length; i++) {
		if (addressList[i].getBirthMonth() == b_month) {
			addressList[i].print();
		}
	}*/
}
void addressBookType::findRelations(string relation) {
	//for (int i = 0; i < length; i++) {
	//	if (addressList[i].getRelationship() == relation) {
	//		addressList[i].print();
	//	}
	//}
}
