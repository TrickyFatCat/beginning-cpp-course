#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Accounts_Util.h"

using namespace std;

// Utility functions for Account class
void display_all(const vector<Account> &accounts)
{
    for(const auto &account: accounts)
    {
        cout<<account<<endl;
    }
}

void deposit_all(vector<Account> &accounts, double amount)
{
    for(auto &account: accounts)
    {
        if(account.deposit(amount))
        {
            cout<<"Deposited "<<amount<<" to "<<account<<endl;
        }
        else
        {
            cout<<"Failed deposit of "<<amount<<" to "<<account<<endl;
        }
    }
}

void withdraw_all(vector<Account> &accounts, double amount)
{
    for(auto &account: accounts)
    {
        if(account.withdraw(amount))
        {
            cout<<"Withdrew "<<amount<<" from "<<account<<endl;
        }
        else
        {
            cout<<"Failed withdrawal of"<<amount<<" from "<<account<<endl;
        }
    }
}

// Utility functions for Savings_Account class
void display_all(const vector<Savings_Account> &accounts)
{
    for(const auto &account: accounts)
    {
        cout<<account<<endl;
    }
}

void deposit_all(vector<Savings_Account> &accounts, double amount)
{
    for(auto &account: accounts)
    {
        if(account.deposit(amount))
        {
            cout<<"Deposited "<<amount<<" to "<<account<<endl;
        }
        else
        {
            cout<<"Failed deposit of "<<amount<<" to "<<account<<endl;
        }
    }
}

void withdraw_all(vector<Savings_Account> &accounts, double amount)
{
    for(auto &account: accounts)
    {
        if(account.withdraw(amount))
        {
            cout<<"Withdrew "<<amount<<" from "<<account<<endl;
        }
        else
        {
            cout<<"Failed withdrawal of"<<amount<<" from "<<account<<endl;
        }
    }
}


// Utility functions for Checking_Account class
void display_all(const vector<Checking_Account> &accounts)
{
    for(const auto &account: accounts)
    {
        cout<<account<<endl;
    }
}

void deposit_all(vector<Checking_Account> &accounts, double amount)
{
    for(auto &account: accounts)
    {
        if(account.deposit(amount))
        {
            cout<<"Deposited "<<amount<<" to "<<account<<endl;
        }
        else
        {
            cout<<"Failed deposit of "<<amount<<" to "<<account<<endl;
        }
    }
}

void withdraw_all(vector<Checking_Account> &accounts, double amount)
{
    for(auto &account: accounts)
    {
        if(account.withdraw(amount))
        {
            cout<<"Withdrew "<<amount<<" from "<<account<<endl;
        }
        else
        {
            cout<<"Failed withdrawal of"<<amount<<" from "<<account<<endl;
        }
    }
}