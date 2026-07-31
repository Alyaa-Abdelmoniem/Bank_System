#include "SavingAccount.h"



SavingAccount::SavingAccount(int id, string ownerName, double balance)
    : Account(id, ownerName, balance)
{

}



string SavingAccount::getType()
{

    return "Saving";

}
