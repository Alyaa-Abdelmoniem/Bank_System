#include "Transaction.h"



Transaction::Transaction(string type, int fromId, int toId, double amount)
{

    this->type = type;

    this->fromId = fromId;

    this->toId = toId;

    this->amount = amount;

}




void Transaction::display()
{

    cout << "Transaction Type: "
         << type
         << endl;



    cout << "From Account: "
         << fromId
         << endl;



    cout << "To Account: "
         << toId
         << endl;



    cout << "Amount: "
         << amount
         << endl;

}
