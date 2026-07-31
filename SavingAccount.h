#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

#include "Account.h"


class SavingAccount : public Account
{

public:

    SavingAccount(int id, string ownerName, double balance);


    string getType() override;

};


#endif
