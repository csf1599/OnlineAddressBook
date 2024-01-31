// addressType class decleration header file
#ifndef ADDTYP
#define ADDTYP
#include <iostream>
#include <string>

using namespace std;

class addressType {
public:
    void setAddress(string);
    void setCity(string);
    void setState(string);
    void setZipcode(int);
    string getAddress();
    string getCity();
    string getState();
    int getZipcode();
    void print();
    addressType();
private:
    string address;
    string city;
    string state;
    int zipcode;
};
#endif
