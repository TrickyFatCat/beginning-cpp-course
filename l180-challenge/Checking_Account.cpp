#include <iostream>
#include "Checking_Account.h"

using namespace std;

Checking_Account::Checking_Account(string name, double balance, double withdraw_fee)
    : Account(name, balance), withdraw_fee {withdraw_fee} {}

bool Checking_Account::withdraw(double amount)
{
    if(amount > balance)
    {
        return false;
    }
    else
    {
        balance -= amount + withdraw_fee;
        return true;
    }
}

ostream &operator<<(ostream &os, const Checking_Account &account)
{
    os<<account.name<<" | "<<account.balance<<" | "<<account.withdraw_fee;

    return os;
}