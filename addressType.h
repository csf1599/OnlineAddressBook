// addressType class decleration header file
#ifndef ADDTYP
#define ADDTYP
#include <iostream>
#include <string>

using namespace std;

class addressType {
public:
    void setAddress(string); // preconditions : default value for address, postconditions : user set address value
    void setCity(string); // preconditions : default value for address, postconditions : user set city value
    void setState(string); // preconditions : default value of XX , postconditions : user set value unless incorrect format, then default value for state
    void setZipcode(int); // preconditions : default value of 10000 , postconditions : user set value for zip unless incorrect value, then default value for zipcode 
    string getAddress(); // preconditions : default or user set value , postconditions : none
    string getCity(); // preconditions : default or user set value, postconditions : none
    string getState(); // preconditions : default or user set value, postconditions : none 
    int getZipcode(); // preconditions : default or user set value, postconditions : none
    void print(); // preconditions : default or user set values for all variables, postconditions : console prints all values in correct format
    addressType(string = " ", string = " ", string = "XX", int = 10000); // default constructor
private:
    string address;
    string city;
    string state;
    int zipcode;
};
#endif
