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
		count++;
		max_length = count;
		length = max_length - 1;
		addEntry(extPersonType(f_name, l_name, mon, day, yr, add, cty, st, zip, p_num, rel));
	}
	sortEntries();

}
void addressBookType::addEntry(extPersonType entry){
	if (length < max_length+1) {
		addressList[length] = entry;
		length++;
	}
	else {
		cout << "Address Book is full!" << endl;
	}
	sortEntries();
}
void addressBookType::sortEntries() {
	int current = 1;
	while (current < length) {
		int index = current;
		bool placeFound = false;
		while (index > 0 && !placeFound) {
			if (addressList[index].getLastName() < addressList[index - 1].getLastName()) {
				extPersonType temp = addressList[index];
				addressList[index] = addressList[index - 1];
				addressList[index - 1] = temp;
				index = index - 1;
			}
			else {
				placeFound = true;
			}
		}
		current = current++;
		
	}
}
void addressBookType::print() {
	for (int i = 0; i <length; i++) {
		addressList[i].print();
		cout << endl;
	}
}
void addressBookType::findPerson(string lastNA) {
	for (int i = 0; i < length; i++) {
		if (addressList[i].getLastName() == lastNA) {
			addressList[i].print();
		}
	}

}
void addressBookType::findBirthdays(int b_month) {
	for (int i = 0; i < length; i++) {
		if (addressList[i].getBirthMonth() == b_month) {
			addressList[i].print();
		}
	}
}
void addressBookType::findRelations(string relation) {
	for (int i = 0; i < length; i++) {
		if (addressList[i].getRelationship() == relation) {
			addressList[i].print();
		}
	}
}
