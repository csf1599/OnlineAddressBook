#include <iostream>
#include <string>
#include "addressType.h"

using namespace std;

addressType::addressType() {
    address = "";
    city = "";
    state = "XX";
    zipcode = 10000;
}
void addressType::setAddress(string addy) {
    address = addy;
}
void addressType::setCity(string cit) {
    city = cit;
}
void addressType::setState(string st) {
    if (st.length() == 2) {
        state = st;
    }
    else {
        cout << "There was an error with state abbreviation, assinging default value (XX)." << endl;
    }
}
void addressType::setZipcode(int zip) {
    if (zip >= 11111 && zip <= 99999) {
        zipcode = zip;
    }
    else {
        cout << "There was an error with the zipcode, assigning default value (10000)." << endl;
    }
}
string addressType::getAddress() {
    return address;
}
string addressType::getCity() {
    return city;
}
string addressType::getState() {
    return state;
}
int addressType::getZipcode() {
    return zipcode;
}
void addressType::print() {
    cout << address << endl;
    cout << city << ", " << state << " " << zipcode << endl;
}