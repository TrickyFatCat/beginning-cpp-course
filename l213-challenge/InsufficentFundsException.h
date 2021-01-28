#ifndef _INSUFFICENT_FUNDS_EXCEPTION_H_
#define _INSUFFICENT_FUNDS_EXCEPTION_H_

class InsuffitentFundsException : public std::exception
{
public:
    InsuffitentFundsException() noexcept = default;
    ~InsuffitentFundsException();
    virtual const char* what() const noexcept
    {
        return "Insuffitent funds excepiton. Trying to withdraw too much money. Balance can't be less than zero.";
    }

}

#endif