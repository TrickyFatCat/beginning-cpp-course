#include <string>
#include "Account.h"

using namespace std;

Account::Account(string name, double balance)
    : name {name}, balance {balance} {}

bool Account::deposit(double amount)
{
    if (amount < 0)
    {
        return false;
    }
    else
    {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount)
{
    if (amount > balance || amount <= 0)
    {
        return false;
    }
    else
    {
        balance -= amount;
        return true;
    }
}

double Account::get_balance() const
{
    return balance;
}