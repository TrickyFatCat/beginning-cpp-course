#include <iostream>
#include "Trust_Account.h"

using namespace std;

Trust_Account::Trust_Account(
    string name,
    double balance,
    double interest_rate,
    double deposit_threshhold,
    double deposit_bonus,
    int withdraw_number,
    double withdraw_threshhold)
    : Savings_Account(name, balance, interest_rate),
    deposit_threshhold {deposit_threshhold},
    deposit_bonus {deposit_bonus},
    withdraw_number {withdraw_number},
    withdraw_threshhold {withdraw_threshhold},
    withdraw_count {0} {}

bool Trust_Account::deposit(double amount)
{
    if(Savings_Account::deposit(amount))
    {
        if(amount >= deposit_threshhold)
        {
            balance += deposit_bonus;
        }
        
        return true;
    }
    else
    {
        return false;
    }
}

bool Trust_Account::withdraw(double amount)
{
    if(withdraw_count < withdraw_number)
    {
        if(Savings_Account::withdraw(amount * withdraw_threshhold))
        {
            return true;    
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}