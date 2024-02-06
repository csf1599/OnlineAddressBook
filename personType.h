#ifndef PRSN_TYPE
#define PRSN_TYPE
#include <iostream>
#include <string>
using namespace std;
class personType {
public:
    void setFirstName(string);
    string getFirstName();
    void setLastName(string);
    string getLastName();
    personType(string = "", string = "");
private:
    string first_name;
    string last_name;
};
#endif
