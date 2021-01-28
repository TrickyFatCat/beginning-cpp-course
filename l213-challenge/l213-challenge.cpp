#include <iostream>
#include <vector>
#include "Account.h"
#include "Accounts_Util.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Checking_Account.h"
#include "IllegalBalanceException.h"

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
        Account *sa_1 = new Savings_Account{"Savings Account 1", 1000.0};
        Account *sa_2 = new Savings_Account{"Savings Account 2", 2000.0, 0.1};
  
        savings_accounts.push_back(sa_0);
        savings_accounts.push_back(sa_1);
        savings_accounts.push_back(sa_2);

    }
    catch(const IllegalBalanceException &exception)
    {
        cerr<<exception.what()<<endl;
    }
    display_all(savings_accounts);
    deposit_all(savings_accounts, 100);
    withdraw_all(savings_accounts, 200);
    
   
    cout<<endl;
    return 0;
}