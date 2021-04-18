#ifndef CUSTOMERDATA_H
#define CUSTOMERDATA_H

#include "PersonData.h"

class CustomerData : public PersonData {

    int* customerNumber{ nullptr };

    /* This value will be set to true if the customer wishes to be
    on a mailing list, or false if the customer does not*/
    bool* mailingList{ nullptr };

public:

    CustomerData();

    CustomerData(string f, string l, string s, string c,
                string st, string p, int a, int z, int n, bool m);

    CustomerData(int i) : PersonData(i) {

        customerNumber = new int;
        mailingList = new bool;

        askCustomerNumber();
        askMailingList();
    }

    CustomerData(string f, string l, string s, string c,
                string st, string p, int a, int z) : 
                PersonData(f, l, s, c, st, p, a, z) {

        customerNumber = new int;
        mailingList = new bool;

        askCustomerNumber();
        askMailingList();
    }

    ~CustomerData();

public:

    void setCustomerNumber(int n);
    void askCustomerNumber();

    void setMailingList(bool m);
    void askMailingList();

    int getCustomerNumber(){

        if (*customerNumber == 0)
            *customerNumber = rand();

        return *customerNumber;}

    string getMailingList() {

        string b;

        if (*mailingList == false)
            b = "No";
        else
            b = "Yes";

        return b;
    }
};

#endif
