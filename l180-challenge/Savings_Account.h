#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include <string>
#include "Account.h"

using namespace std;

class Savings_Account : public Account{
    friend ostream &operator<<(ostream &os, const Savings_Account &account);
private:
    static constexpr const char *default_name = "Unnamed savings account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.01;
protected:
    double interest_rate;
public:
    Savings_Account(string account_name = default_name, double balance = default_balance, double interest_rate = default_interest_rate);
    bool deposit(double amount);
};

#endif