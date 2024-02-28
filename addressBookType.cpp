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

}
void addressBookType::addEntry(extPersonType entry){
	if (length < max_length) {
		addressList[length] = entry;
		length++;
	}
	else {
		cout << "Address Book is full!" << endl;
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