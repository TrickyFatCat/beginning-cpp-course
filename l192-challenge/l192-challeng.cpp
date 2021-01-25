#include <iostream>
#include <vector>
#include "Account.h"
#include "Accounts_Util.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Checking_Account.h"

using namespace std;

int main()
{
    string header_part_1(15, '>');
    string header_part_2(15, '<');
    vector<Account*> savings_accounts{};
    vector<Account*> checking_accounts{};
    vector<Account*> trust_accounts{};

    cout<<header_part_1<<" Savings Accounts "<<header_part_2<<endl;

    Account *sa_0 = new Savings_Account{"Savings Account 0"};
    Account *sa_1 = new Savings_Account{"Savings Account 1", 1000.0};
    Account *sa_2 = new Savings_Account{"Savings Account 2", 2000.0, 0.1};

    savings_accounts.push_back(sa_0);
    savings_accounts.push_back(sa_1);
    savings_accounts.push_back(sa_2);

    display_all(savings_accounts);
    deposit_all(savings_accounts, 100);
    withdraw_all(savings_accounts, 200);
    
    cout<<header_part_1<<" Checking Accounts "<<header_part_2<<endl;

    Account *ca_0 = new Checking_Account{"Checking Account 0"};
    Account *ca_1 = new Checking_Account{"Checking Account 1", 1000.0};
    Account *ca_2 = new Checking_Account{"Checking Account 2", 2000.0, 9.99};
    checking_accounts.push_back(ca_0);
    checking_accounts.push_back(ca_1);
    checking_accounts.push_back(ca_2);

    display_all(checking_accounts);
    deposit_all(checking_accounts, 100);
    withdraw_all(checking_accounts, 200);
     
    cout<<header_part_1<<" Trust Accounts "<<header_part_2<<endl;

    Account *ta_0 = new Trust_Account{"Trust Account 0"};
    Account *ta_1 = new Trust_Account{"Trust Account 1", 1000.0};
    Account *ta_2 = new Trust_Account{"Trust Account 2", 2000.0, 0.1};

    trust_accounts.push_back(ta_0);
    trust_accounts.push_back(ta_1);
    trust_accounts.push_back(ta_2);

    display_all(trust_accounts);
    deposit_all(trust_accounts, 100);
    withdraw_all(trust_accounts, 200);
    withdraw_all(trust_accounts, 200);
    withdraw_all(trust_accounts, 200);
    
    cout<<endl;
    return 0;
}