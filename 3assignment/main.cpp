#include "BankAccount.h"

#include <iostream>

using namespace Assignment3;
using namespace std;

int main(void)
{
    BankAccount *bAccount, *obAccount;
    bAccount->Deposit(500);
    obAccount = bAccount->Clone();

    if (*bAccount == *obAccount)
        cout << "eq" << endl;
    else
        cout << "not eq" << endl;

    return 0;
}
