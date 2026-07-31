#include "Account.h"



Account::Account(int id, string ownerName, double balance)
{

    this->id = id;

    this->ownerName = ownerName;

    this->balance = balance;

}



Account::~Account()
{

}



void Account::deposit(double amount)
{

    balance += amount;

}



void Account::withdraw(double amount)
{

    balance -= amount;

}



void Account::display()
{

    cout << "Account ID: "
         << id
         << endl;


    cout << "Owner Name: "
         << ownerName
         << endl;


    cout << "Balance: "
         << balance
         << endl;

}



int Account::getId()
{

    return id;

}



string Account::getOwnerName()
{

    return ownerName;

}



double Account::getBalance()
{

    return balance;

}
