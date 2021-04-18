#include "PersonData.h"
#include <string>

using namespace std;

PersonData::PersonData() {

        // Default Constructor

    firstName = "";
    lastName = "";
    streetName = "";
    city = "";
    state = "";
    phone = "";

    address = 0;
    zip = 0;
        
}

PersonData::PersonData(int i) {

    // User-Friendly constructor

    if (i == 0) {

    askFirstName();
    askLastName();
    askAddress();

    cin.ignore();
    
    askStreetName();
    askCity();
    askState();
    askZip();

    cin.ignore();

    askPhone();
    }
}

PersonData::PersonData(string f, string l, string s, string c, 
                        string st, string p, int a, int z) {
    // Specialized constructor

    firstName = f;
    lastName = l;
    streetName = s;
    city = c;
    state = st;
    phone = p;

    address = a;
    zip = z;
}



void PersonData::setFirstName(string f) {

    firstName = f;
}
void PersonData::askFirstName() {

    cout
        << "Enter First Name: ";

    getline(cin, firstName);
}


void PersonData::setLastName(string l) {

    lastName = l;
}
void PersonData::askLastName() {

    cout
        << "Enter Last Name: ";

    getline(cin, lastName);
}


void PersonData::setStreetName(string s) {

    streetName = s;
}
void PersonData::askStreetName() {

    cout
        << "Enter Street Name: ";

    getline(cin, streetName);
}


void PersonData::setCity(string c) {

    city = c;
}
void PersonData::askCity() {

    cout
        << "Enter City Name: ";
    
    getline(cin, city);
}


void PersonData::setState(string st) {

    state = st;
}
void PersonData::askState() {

    cout
        << "Enter State Name: ";

    getline(cin, state);
}


void PersonData::setPhone(string p) {

    phone = p;
}
void PersonData::askPhone() {

    cout
        << "Enter Phone Number: ";
    
    getline(cin, phone);
}


void PersonData::setAddress(int a) {

    address = a;
}
void PersonData::askAddress() {

    cout
        << "Enter Street Address Number: ";
    cin
        >> address;
}


void PersonData::setZip(int z) {

    zip = z;
}
void PersonData::askZip() {

    cout
        << "Enter Zip Code: ";
    cin
        >> zip;
}
