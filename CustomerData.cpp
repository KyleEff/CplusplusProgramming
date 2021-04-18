#include "CustomerData.h"

CustomerData::CustomerData() {

    // Default Constructor

    customerNumber = new int;
    mailingList = new bool;

    firstName = "";
    lastName = "";
    streetName = "";
    city = "";
    state = "";
    phone = "";

    address = 0;
    zip = 0;
}

CustomerData::CustomerData(string f, string l, string s, string c,
                string st, string p, int a, int z, int n, bool m) {

    // Specialized constructor

    firstName = f;
    lastName = l;
    streetName = s;
    city = c;
    state = st;
    phone = p;

    address = a;
    zip = z;

    customerNumber = new int;
    mailingList = new bool;

    *customerNumber = n;
    *mailingList = m;
}

CustomerData::~CustomerData() {

    // Destructor

    delete customerNumber;
    delete mailingList;

    cout
        << *customerNumber
        << endl

        << *mailingList
        << endl;
}

void CustomerData::setCustomerNumber(int n) {

    srand(rand() % rand());

    /*If the parameter entered is 0,
      the customerNumber will be random*/
    if (n == 0) 
        *customerNumber = rand();
    else
        *customerNumber = n;
}
void CustomerData::askCustomerNumber() {
    
    cout
        << "Enter Customer Number: ";
    cin
        >> *customerNumber;

    if (*customerNumber == 0)
        *customerNumber = rand();
}


void CustomerData::setMailingList(bool m) {

    *mailingList = m;
}
void CustomerData::askMailingList() {

    char b;

    cout 
        << "Mailing List? y/n: ";
    cin
        >> b;

    if (b == 'y')
        *mailingList = true;
    else
        *mailingList = false;
}

