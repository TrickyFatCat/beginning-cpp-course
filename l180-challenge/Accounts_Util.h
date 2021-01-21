#ifndef _ACCOUNTS_UTIL_H_
#define _ACCOUNTS_UTIL_H_

#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"

// Utility functions for Account class
void display_all(const vector<Account> &accountss);
void deposit_all(vector<Account> &accountss, double amount);
void withdraw_all(vector<Account> &accounts, double amount);

// Utility functions for Savings_Account class
void display_all(const vector<Savings_Account> &accountss);
void deposit_all(vector<Savings_Account> &accountss, double amount);
void withdraw_all(vector<Savings_Account> &accounts, double amount);

// Utility functions for Checking_Account class
void display_all(const vector<Checking_Account> &accountss);
void deposit_all(vector<Checking_Account> &accountss, double amount);
void withdraw_all(vector<Checking_Account> &accounts, double amount);
#endif