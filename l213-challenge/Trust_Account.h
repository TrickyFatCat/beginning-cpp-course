#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "Savings_Account.h"

using namespace std;

class Trust_Account: public Savings_Account
{
private:
    static constexpr const char *default_name = "Unnamed trust account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.01;
    static constexpr double default_deposit_threshhold = 5000.0;
    static constexpr double default_deposit_bonus = 50.0;
    static constexpr int default_withdraw_number = 3;
    static constexpr double default_withdraw_threshhold = 0.2;
protected:
    double deposit_threshhold;
    double deposit_bonus;
    int withdraw_number;
    int withdraw_count;
    double withdraw_threshhold;
public:
    Trust_Account(
        string name = default_name,
        double balance = default_balance,
        double interest_rate = default_interest_rate,
        double deposit_threshhold = default_deposit_threshhold,
        double deposit_bonus = default_deposit_bonus,
        int withdraw_number = default_withdraw_number,
        double withdraw_threshhold = default_withdraw_threshhold);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(ostream &os) const override;
};

#endif