#ifndef BANKEXCEPTIONS_H
#define BANKEXCEPTIONS_H

#include <exception>


using namespace std;



class InvalidAmount : public exception
{

public:

    const char* what() const noexcept override
    {

        return "Invalid amount.";

    }

};



class AccountNotFound : public exception
{

public:

    const char* what() const noexcept override
    {

        return "Account not found.";

    }

};



class NotEnoughBalance : public exception
{

public:

    const char* what() const noexcept override
    {

        return "Not enough balance.";

    }

};



#endif
