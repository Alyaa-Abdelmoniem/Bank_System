#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"


class CheckingAccount : public Account
{

public:

    CheckingAccount(int id, string ownerName, double balance);

    string getType() override;

};


#endif
