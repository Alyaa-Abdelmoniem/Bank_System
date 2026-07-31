#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include <string>

using namespace std;


class Transaction
{

private:

    string type;

    int fromId;

    int toId;

    double amount;


public:

    Transaction(string type, int fromId, int toId, double amount);


    void display();

};


#endif
