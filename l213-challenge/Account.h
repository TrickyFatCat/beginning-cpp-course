#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include "I_Printable.h"

using namespace std;

class Account: public I_Printable
{
private:
    static constexpr const char *default_name = "Unnamed account";
    static constexpr double default_balance = 0.0;
protected:
    string name;
    double balance;
public:
    Account(string name = default_name, double balance = default_balance);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    string get_name() const;
    double get_balance() const;
    virtual ~Account() = default;
};

#endif