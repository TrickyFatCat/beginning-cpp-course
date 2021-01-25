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
    vector<Account> accounts;
    accounts.push_back(Account {"Account 1"});
    accounts.push_back(Account {"Account 2", 1000.0});
    accounts.push_back(Account {"Account 3", 2000.0});

    display_all(accounts);
    deposit_all(accounts, 500);
    withdraw_all(accounts, 250);

    vector<Savings_Account> savings_accounts;
    savings_accounts.push_back(Savings_Account {"Account 1"});
    savings_accounts.push_back(Savings_Account {"Account 2", 1000.0});
    savings_accounts.push_back(Savings_Account {"Account 3", 2000.0, 0.05});

    display_all(savings_accounts);
    deposit_all(savings_accounts, 500);
    withdraw_all(savings_accounts, 250);

    vector<Checking_Account> checking_accounts;
    checking_accounts.push_back(Checking_Account {"Account 1"});
    checking_accounts.push_back(Checking_Account {"Account 2", 1000.0});
    checking_accounts.push_back(Checking_Account {"Account 3", 2000.0, 2.0});

    display_all(checking_accounts);
    deposit_all(checking_accounts, 500);
    withdraw_all(checking_accounts, 250);

    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account {"Account 1"});
    trust_accounts.push_back(Trust_Account {"Account 2", 1000.0});
    trust_accounts.push_back(Trust_Account {"Account 3", 2000.0, 2.0});

    display_all(trust_accounts);
    deposit_all(trust_accounts, 5000);
    withdraw_all(trust_accounts, 250);
    withdraw_all(trust_accounts, 250);
    withdraw_all(trust_accounts, 250);
    withdraw_all(trust_accounts, 250);
    withdraw_all(trust_accounts, 2500);
    withdraw_all(trust_accounts, 250);
    
    cout<<endl;
    return 0;
}