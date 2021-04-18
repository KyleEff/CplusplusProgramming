#ifndef PERSONDATA_H
#define PERSONDATA_H

#include <iostream>

using namespace std;

class PersonData {

    // Member Attributes 
protected:
    string
        firstName,
        lastName,
        streetName,
        city,
        state,
        phone;

    int
        address,
        zip;

    // Constructor Declarations
    PersonData();

    PersonData(int i);

    PersonData(string f, string l, string s, string c, 
                string st, string p, int a, int z);

public:

    // Mutator Function Declarations
    void setFirstName(string f);
    void askFirstName();

    void setLastName(string l);
    void askLastName();

    void setStreetName(string s);
    void askStreetName();

    void setCity(string c);
    void askCity();

    void setState(string st);
    void askState();

    void setPhone(string p);
    void askPhone();

    void setAddress(int a);
    void askAddress();

    void setZip(int z);
    void askZip();

    // Accessor Functions
    string getFirstName()
        {return firstName;}

    string getLastName()
        {return lastName;}

    string getStreetName()
        {return streetName;}

    string getCity()
        {return city;}

    string getState()
        {return state;}

    string getPhone()
        {return phone;}

    int getAddress() 
        {return address;}

    int getZip()
        {return zip;}

};

#endif
