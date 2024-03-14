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
	nodeType <extPersonType>* current;
	current = first;
	while (current != NULL) {
		if (current->info.getLastName() == lastNA) {
			current->info.ext_print();
			current = current->link;
		}
		else {
			current = current->link;
		}
	}

}
void addressBookType::findBirthdays(int b_month) {
	nodeType <extPersonType>* current;
	current = first;
	while (current != NULL) {
		if (current->info.getBirthMonth() == b_month) {
			current->info.ext_print();
			current = current->link;
		}
		else {
			current = current->link;
		}
	}
}
void addressBookType::findRelations(string relation) {
	nodeType <extPersonType>* current;
	current = first;
	while (current != NULL) {
		if (current->info.getRelationship() == relation) {
			current->info.ext_print();
			current = current->link;
		}
		else {
			current = current->link;
		}
	}
}
void addressBookType::deleteEntry(string uPerson) {
	nodeType <extPersonType>* current;
	current = first;
	while (current != NULL) {
		if (current->info.getFirstName() + " " + current->info.getLastName() == uPerson) {
			deleteNode(current->info);
			break;
		}
		else {
			current = current->link;
		}
	}
}
void addressBookType::userAdd(extPersonType uPerson) {
	addEntry(uPerson);
}
void addressBookType::reInit(string filename) {
	//ofstream outFile(filename);
	//nodeType<extPersonType>* current = this->first;
	//while (current != nullptr) {
	//	outFile << current->info.getFirstName() << " " << current->info.getLastName() << endl;
	//	outFile << current->info.getBirthMonth() << " " << current->info.getDay() << " " << current->info.getYear() << endl;
	//	outFile << current->info.getAddress() << endl;
	//	outFile << current->info.getCity() << endl;
	//	outFile << current->info.getState() << endl;
	//	outFile << current->info.getZipcode() << endl;
	//	outFile << current->info.getPhoneNumber() << endl;
	//	outFile << current->info.getRelationship() << endl;
	//	current = current->link;
	//}

	//outFile.close();
}