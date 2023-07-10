#include <iostream>
#include "BankAccount.h"
#include "InsufficientFundsException.h"

int main()
{
    BankAccount user1(300);
    try {
        user1.withdrawMoney(400);
    }
    catch (const InsufficientFundsException& ex) {
        cout << "Exception caught: " << ex.what() << endl;
    }

    cout << endl << "--------------" << endl;
    try {
        user1.addMoney(-1);
    }
    catch (const InsufficientFundsException& ex) {
        cout << "Exception caught: " << ex.what() << endl;
    }
}