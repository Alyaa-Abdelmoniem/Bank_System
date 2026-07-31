#include "Bank.h"
#include <algorithm>


Bank::Bank()
{
    accounts = fileManager.loadAccounts();
}



void Bank::createAccount(shared_ptr<Account> account)
{
    accounts.push_back(account);

    fileManager.saveAccounts(accounts);
}



shared_ptr<Account> Bank::findAccount(int id)
{

    auto it = find_if(accounts.begin(), accounts.end(),
        [id](shared_ptr<Account> account)
        {
            return account->getId() == id;
        });


    if (it != accounts.end())
    {
        return *it;
    }


    throw AccountNotFound();

}



void Bank::deposit(int id, double amount)
{

    if (amount <= 0)
    {
        throw InvalidAmount();
    }


    shared_ptr<Account> account = findAccount(id);


    account->deposit(amount);


    fileManager.saveAccounts(accounts);

}



void Bank::withdraw(int id, double amount)
{

    if (amount <= 0)
    {
        throw InvalidAmount();
    }


    shared_ptr<Account> account = findAccount(id);


    if (amount > account->getBalance())
    {
        throw NotEnoughBalance();
    }


    account->withdraw(amount);


    fileManager.saveAccounts(accounts);

}



void Bank::transfer(int fromId, int toId, double amount)
{

    if (fromId == toId)
    {
        throw InvalidAmount();
    }


    if (amount <= 0)
    {
        throw InvalidAmount();
    }


    shared_ptr<Account> from = findAccount(fromId);

    shared_ptr<Account> to = findAccount(toId);



    if (amount > from->getBalance())
    {
        throw NotEnoughBalance();
    }



    from->withdraw(amount);

    to->deposit(amount);



    fileManager.saveAccounts(accounts);

}



void Bank::displayAccounts()
{

    for (auto account : accounts)
    {

        account->display();

        cout << "Type: "
             << account->getType()
             << endl;

        cout << endl;

    }

}



vector<shared_ptr<Account>> Bank::getAccounts()
{
    return accounts;
}
