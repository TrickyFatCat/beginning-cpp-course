#include <iostream>
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Accounts_Util.h"

using namespace std;

// Utility functions for Account class
void display_all(const vector<Account*> &accounts)
{
    cout<<"-----------------------------------------------------------------\n";
    for(const auto account: accounts)
    {
        cout<<*account<<endl;
    }
    cout<<"-----------------------------------------------------------------\n";
}

void deposit_all(vector<Account*> &accounts, double amount)
{
    cout<<"-----------------------------------------------------------------\n";
    for(auto account: accounts)
    {
        if(account->deposit(amount))
        {
            cout<<"Deposited "<<amount<<" to "<<*account<<endl;
        }
        else
        {
            cout<<"Failed deposit of "<<amount<<" to "<<*account<<endl;
        }
    }
    cout<<"-----------------------------------------------------------------\n";
}

void withdraw_all(vector<Account*> &accounts, double amount)
{
    cout<<"-----------------------------------------------------------------\n";
    for(auto account: accounts)
    {
        if(account->withdraw(amount))
        {
            cout<<"Withdrew "<<amount<<" from "<<*account<<endl;
        }
        else
        {
            cout<<"Failed withdrawal of "<<amount<<" from "<<*account<<endl;
        }
    }
    cout<<"-----------------------------------------------------------------\n";
}
