#ifndef MYSAVINGS_H
#define MYSAVINGS_H

#include <iostream>
#include <iomanip>

using namespace std;

class MySavings {

    double
        *balance{ nullptr },
        *interestRate{ nullptr };

    int
        *numWithdraws{ nullptr },
        *numDeposits{ nullptr };

public:

    MySavings() {

        balance = new double;
        interestRate = new double;

        numWithdraws = new int;
        numDeposits = new int;
    }

    MySavings(double balance, double interestRate, int numDeposits, int numWithdraws) {

        this->balance = new double;
        this->interestRate = new double;

        this->numWithdraws = new int;
        this->numDeposits = new int;

        *this->balance = balance;
        *this->interestRate = interestRate;
        *this->numWithdraws = numWithdraws;
        *this->numDeposits = numDeposits;
    }

    virtual ~MySavings() {

        delete
            balance,
            interestRate,
            numDeposits,
            numWithdraws;
    }

    // Member Functions
    // Mutator Functions
    void setBalance(double balance)
        {*this->balance = balance;}

    void setInterestRate(double interestRate)
        {*this->interestRate = interestRate;}

    void setNumDeposits(int numDeposits)
        {*this->numDeposits = numDeposits;}

    void setNumWithdraws(int numWithdraws)
        {*this->numWithdraws = numWithdraws;}

    // Accessor Functions
    double getBalence()
        {return *balance;}

    double getInterestRate()
        {return *interestRate;}

    int getNumDeposits()
        {return *numDeposits;}

    int getNumWithdraws() 
        {return *numWithdraws;}

    int getTransactionCount(int* numDeposits, int* numWithdraws)
        {return *numDeposits + *numWithdraws;}

    void print() {

        cout
            << fixed
            << setprecision(2)

            << "Balence: $" << getBalence()
            << endl

            << "Interest Rate: " << getInterestRate() * 100 <<"%"
            << endl

            << "Number of Deposits: " << getNumDeposits()
            << endl

            << "Number of Withdraws: " << getNumWithdraws()
            << endl

            << "Number of Transactions: " << getTransactionCount(numDeposits, numWithdraws)
            << endl;
    }
};

#endif
