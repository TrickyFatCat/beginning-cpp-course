#include <iostream>
#include "Savings_Account.h"

using namespace std;

Savings_Account::Savings_Account(string name, double balance, double interest_rate)
    : Account(name, balance), interest_rate {interest_rate} {}

bool Savings_Account::deposit(double amount)
{
    if (Account::deposit(amount))
    {
        balance += amount * interest_rate;
        return true;
    }
    
    return false;
}

bool Savings_Account::withdraw(double amount)
{
    return Account::withdraw(amount);
}

void Savings_Account::print(ostream &os) const
{
    os<<name<<" | "<<balance<<" | "<<interest_rate;
}