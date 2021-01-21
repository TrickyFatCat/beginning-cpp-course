#ifndef _ACCOUNTS_UTIL_H_
#define _ACCOUNTS_UTIL_H_

#include <vector>
#include "Account.h"
#include "Savings_Account.h"

// Utility functions for Account class
void display_all(const vector<Account> &accounts);
void deposit_all(vector<Account> &accounts, double amount);
void withdraw_all(vector<Account> &account, double amount);

// Utility functions for Savings_Account class
void display_all(const vector<Savings_Account> &accounts);
void deposit_all(vector<Savings_Account> &accounts, double amount);
void withdraw_all(vector<Savings_Account> &account, double amount);

#endif