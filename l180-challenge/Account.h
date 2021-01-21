#include <string>

using namespace std;

class Account
{
    friend ostream &operator<<(ostream &os, const Account &account);
private:
    /* data */
protected:
public:
    Account(/* args */);
    ~Account();
};

Account::Account(/* args */)
{
}

Account::~Account()
{
}
