#include <iostream>
#include <string>
#include "Account.h"
#include "IllegalBalanceException.h"

using namespace std;

Account::Account(string name, double balance)
    : name {name}, balance {balance}
{
    if(balance < 0)
    {
        throw IllegalBalanceException();
    }
}

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

string Account::get_name() const
{
    return name;
}

double Account::get_balance() const
{
    return balance;
}
