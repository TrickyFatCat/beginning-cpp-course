#include <iostream>
#include "Savings_Account.h"

using namespace std;

Savings_Account::Savings_Account(string name, double balance, double interest_rate)
    : Account(name, balance), interest_rate {interest_rate} {}

bool Savings_Account::deposit(double amount)
{
    if (amount < 0)
    {
        return false;
    }
    else
    {
        balance += amount + amount * interest_rate;
        return true;
    }
}

ostream &operator<<(ostream &os, const Savings_Account &account)
{
    os<<"Account: "<<account.name<<" | "<<account.balance<<" | "<<account.interest_rate;
    return os;
}