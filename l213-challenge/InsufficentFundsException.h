#ifndef _INSUFFICENT_FUNDS_EXCEPTION_H_
#define _INSUFFICENT_FUNDS_EXCEPTION_H_

class InsufficentFundsException : public std::exception
{
public:
    InsufficentFundsException() noexcept = default;
    ~InsufficentFundsException() = default;
    virtual const char* what() const noexcept
    {
        return "Insuffitent funds excepiton. Can't withdraw negative amount of money";
    }

};

#endif