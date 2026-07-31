#include "CheckingAccount.h"


CheckingAccount::CheckingAccount(int id, string ownerName, double balance)
    : Account(id, ownerName, balance)
{

}


string CheckingAccount::getType()
{
    return "Checking";
}
