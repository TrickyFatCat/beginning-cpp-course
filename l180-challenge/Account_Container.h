#ifndef _ACCOUNT_CONTAINER_H_
#define _ACCOUNT_CONTAINER_H_

#include <vector>
#include "Account.h"

using namespace std;

class Account_Container
{
private:
    vector<Account> accounts;
    static constexpr const char *default_name = "Unnamed account";
    static constexpr double default_balance = 0.0;
protected:
public:
    vector<Account> *get_accounts_list();
    bool is_list_empty() const;
    bool is_account_in_list(string account_name) const;
    bool create_account(string account_name = default_name, double balance = default_balance);
    bool remove_account(string account_name);
    bool deposit(string account_name, double amount);
    bool withdraw(string account_name, double amount);
};

#endif