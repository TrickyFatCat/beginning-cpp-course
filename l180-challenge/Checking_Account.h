#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include "Account.h"

using namespace std;

class Checking_Account: public Account
{
    friend ostream &operator<<(ostream &os, const Checking_Account &account);
private:
    static constexpr const char *default_name = "Unnamed checking account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_withdraw_fee = 1.5;
protected:
    double withdraw_fee;
public:
    Checking_Account(string name = default_name, double balance = default_balance, double withdraw_fee = default_withdraw_fee);
    bool withdraw(double amount);
};

#endif