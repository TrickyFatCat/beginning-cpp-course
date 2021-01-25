#include <iostream>
#include "Checking_Account.h"

using namespace std;

Checking_Account::Checking_Account(string name, double balance, double withdraw_fee)
    : Account(name, balance), withdraw_fee {withdraw_fee} {}

bool Checking_Account::deposit(double amount)
{
    return Account::deposit(amount);
}

bool Checking_Account::withdraw(double amount)
{
    if(Account::withdraw(amount))
    {
        balance -= withdraw_fee;
        return true;
    }

    return false;
}

void Checking_Account::print(ostream &os) const
{
    os<<name<<" | "<<balance<<" | "<<withdraw_fee;
}