#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <vector>
#include <memory>

#include "Account.h"
#include "BankExceptions.h"
#include "FileManager.h"

using namespace std;


class Bank
{

private:

    vector<shared_ptr<Account>> accounts;

    FileManager fileManager;


public:

    Bank();


    void createAccount(shared_ptr<Account> account);


    void deposit(int id, double amount);


    void withdraw(int id, double amount);


    void transfer(int fromId, int toId, double amount);


    void displayAccounts();


    shared_ptr<Account> findAccount(int id);


    vector<shared_ptr<Account>> getAccounts();


};

#endif
