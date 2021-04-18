#include "MySavings.h"

int main() {

    MySavings* account{ nullptr };
    account = new MySavings();

    MySavings account2(200, 0.05, 30, 2);

    account->setBalance(100);
    account->setInterestRate(0.025);
    account->setNumDeposits(15);
    account->setNumWithdraws(1);

    account->print();

    cout << endl;

    account2.print();

    return 0;
}