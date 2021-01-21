#include <string>

using namespace std;

class Account
{
    friend ostream &operator<<(ostream &os, const Account &account);
private:
    static constexpr const char *default_name = "Unnamed account";
    static constexpr double default_balance = 0.0;
protected:
    string name;
    double balance;
public:
    Account(string name = default_name, double balance = default_balance);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const;
};