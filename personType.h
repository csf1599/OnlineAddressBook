#ifndef PRSN_TYPE
#define PRSN_TYPE
#include <iostream>
#include <string>
using namespace std;
class personType {
public:
    void setFirstName(string); // preconditions : users input for first name , postconditions : sets the first_name to the input
    string getFirstName(); // preconditions : none , postconditions : returns first_name
    void setLastName(string); // preconditions : users input for last name , postconditions : sets the last_name to the input
    string getLastName(); // preconditions : none , postconditions : returns last_name
    void print(); // preconditions : none , postconditions : outputs first_name and last_name to the console in the specified format
    personType(string = "", string = "");
private:
    string first_name;
    string last_name;
};
#endif
