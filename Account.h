#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

using namespace std;


class Account
{

protected:

    int id;

    string ownerName;

    double balance;



public:

    Account(int id, string ownerName, double balance);


    virtual ~Account();



    virtual void deposit(double amount);


    virtual void withdraw(double amount);



    virtual void display();



    virtual string getType() = 0;



    int getId();



    string getOwnerName();



    double getBalance();



};


#endif
