#include <iostream>
#include <vector>
#include "Account.h"
#include "Accounts_Util.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Checking_Account.h"
#include "IllegalBalanceException.h"
#include "InsufficentFundsException.h"

using namespace std;

int main()
{
    string header_part_1(15, '>');
    string header_part_2(15, '<');
    vector<Account*> savings_accounts{};

    cout<<header_part_1<<" Savings Accounts "<<header_part_2<<endl;

    try
    {
        Account *sa_0 = new Savings_Account{"Savings Account 0", -1000.0};
        savings_accounts.push_back(sa_0);
    }
    catch(const IllegalBalanceException &exception)
    {
        cerr<<exception.what()<<endl;
    }

    try
    {
        Account *sa_1 = new Savings_Account{"Savings Account 1", 1000.0};
        savings_accounts.push_back(sa_1);
    }
    catch(const IllegalBalanceException &exception)
    {
        cerr<<exception.what()<<endl;
    }

    try
    {
        Account *sa_2 = new Savings_Account{"Savings Account 2", 2000.0, 0.1};
        savings_accounts.push_back(sa_2);
    }
    catch(const IllegalBalanceException &exception)
    {
        cerr<<exception.what()<<endl;
    }
    
    try
    {
        savings_accounts.at(0)->withdraw(-100);
    }
    catch(const InsufficentFundsException &exception)
    {
        cerr<<exception.what()<<endl;
    }

    try
    {
        savings_accounts.at(1)->withdraw(100);
    }
    catch(const InsufficentFundsException &exception)
    {
        cerr<<exception.what()<<endl;
    }

    display_all(savings_accounts);
    deposit_all(savings_accounts, 100);

    try
    {
        withdraw_all(savings_accounts, 200);
    }
    catch(const InsufficentFundsException &exception)
    {
        cerr<<exception.what()<<endl;
    }
    
    try
    {
        withdraw_all(savings_accounts, -50);
    }
    catch(const InsufficentFundsException &exception)
    {
        cerr<<exception.what()<<endl;
    }
    
   
    cout<<endl;
    return 0;
}