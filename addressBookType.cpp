#include "addressBookType.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void addressBookType::initEntry(string filename) {
	fstream inFile;
	inFile.open(filename);

}