#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
    Account frank_account;
    frank_account.set_name("Frank's account");
    frank_account.set_balance(1000.0);

    if (frank_account.deposit(200))
    {
        cout<<"Deposit OK\n";
    }
    else
    {
        cout<<"Deposit Not allowed\n";
    }

    if (frank_account.withdraw(500.0))
    {
        cout<<"Withdrawal OK\n";
    }
    else
    {
        cout<<"No sufficient funds\n";
    }

    if (frank_account.withdraw(1000.0))
    {
        cout<<"Withdrawal OK\n";
    }
    else
    {
        cout<<"No sufficient funds\n";
    }


    cout<<endl;
    return 0;
}