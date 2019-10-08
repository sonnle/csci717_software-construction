#include "BankAccount.h"

using namespace Assignment3;

BankAccount::BankAccount(double initAmount)
{
    Deposit(initAmount);
}

void BankAccount::Deposit(double dAmount)
{
    // Checks to see if deposit is less than 0
    if (dAmount < 0)
        dAmount = 0;

    balance += dAmount;
}

void BankAccount::Withdraw(double wAmount)
{
    // Checks to see if withdrawl is less than 0
    // to prevent malicous withdrawls that add
    // money to the account
    if (wAmount < 0)
        wAmount = 0;

    // Check to see if there is enough money to
    // withdraw the requested amount
    if (balance > wAmount)
        balance -= wAmount;
}

double BankAccount::GetBalance(void)
{
    return balance;
}

BankAccount* BankAccount::Clone()
{
    // Create object to hold the new account and initalize
    // to 0, then check the balance of current account
    // and assign that to the new account
    BankAccount *newAccount = new BankAccount();
    newAccount->Deposit(GetBalance());
    return newAccount;
}

