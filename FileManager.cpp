#include "FileManager.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"
#include <ctime>


void FileManager::saveAccounts(vector<shared_ptr<Account>> accounts)
{

    ofstream file("accounts.txt");


    if (!file.is_open())
    {
        cout << "Cannot open accounts file." << endl;
        return;
    }


    for (auto account : accounts)
    {

        file << account->getType() << " "
             << account->getId() << " "
             << account->getOwnerName() << " "
             << account->getBalance()
             << endl;

    }


    file.close();

}



vector<shared_ptr<Account>> FileManager::loadAccounts()
{

    vector<shared_ptr<Account>> accounts;


    ifstream file("accounts.txt");


    if (!file.is_open())
    {
        return accounts;
    }


    string type;
    int id;
    string name;
    double balance;



    while (file >> type >> id >> name >> balance)
    {

        if (type == "Saving")
        {
            accounts.push_back(
                make_shared<SavingAccount>(id, name, balance)
            );
        }


        else if (type == "Checking")
        {
            accounts.push_back(
                make_shared<CheckingAccount>(id, name, balance)
            );
        }

    }


    file.close();


    return accounts;

}



void FileManager::saveTransaction(string text)
{

    ofstream file("transactions.txt", ios::app);


    time_t now = time(0);


    file << "Timestamp: "
         << ctime(&now);


    file << "Operation: "
         << text
         << endl;


    file << "------------------------"
         << endl;


    file.close();

}
