#include <vector>
#include "Account.h"
#include "Account_Container.h"

vector<Account> *Account_Container::get_accounts_list()
{
    return &accounts;
}

bool Account_Container::is_list_empty() const
{
    return accounts.size() == 0;
}

bool Account_Container::is_account_in_list(string account_name) const
{
    for(const auto &account: accounts)
    {
        if(account.get_name() == account_name)
        {
            return true;
        }
    }

    return false;
}

bool Account_Container::create_account(string account_name, double balance)
{
    if(!is_account_in_list(account_name))
    {
        Account *new_account {nullptr};

        new_account = new Account(account_name, balance);
        accounts.push_back(*new_account);
        delete new_account;
        
        return true;
    }

    return false;
}

bool Account_Container::remove_account(string account_name)
{
    for(size_t i {0}; i < accounts.size(); ++i)
    {
        if(accounts.at(i).get_name() == account_name)
        {
            accounts.erase(accounts.begin() + i);
            accounts.shrink_to_fit();
            return true;
        }
    }

    return false;
}

bool Account_Container::deposit(string account_name, double amount)
{
    for(auto &account: accounts)
    {
        if(account.get_name() == account_name)
        {
            return account.deposit(amount);
        }
    }

    return false;
}

bool Account_Container::withdraw(string account_name, double amount)
{
    for(auto &account: accounts)
    {
        if(account.get_name() == account_name)
        {
            return account.withdraw(amount);
        }
    }

    return false;
}