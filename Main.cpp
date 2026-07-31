#include <iostream>
#include <memory>

#include "Bank.h"
#include "SavingAccount.h"
#include "CheckingAccount.h"
#include "FileManager.h"


using namespace std;



int main()
{

    Bank bank;

    FileManager fileManager;


    int choice;



    do
    {

        cout << "\n===== Bank System =====" << endl;

        cout << "1. Create Savings Account" << endl;

        cout << "2. Create Checking Account" << endl;

        cout << "3. Deposit" << endl;

        cout << "4. Withdraw" << endl;

        cout << "5. Transfer" << endl;

        cout << "6. Display Accounts" << endl;

        cout << "7. Exit" << endl;


        cout << "Enter choice: ";

        cin >> choice;



        try
        {


            if (choice == 1)
            {

                int id;

                string name;

                double balance;



                cout << "Enter ID: ";

                cin >> id;



                cout << "Enter Name: ";

                cin >> name;



                cout << "Enter Balance: ";

                cin >> balance;



                bank.createAccount(
                    make_shared<SavingAccount>
                    (id, name, balance)
                );



                cout << "Savings Account Created." << endl;


            }



            else if (choice == 2)
            {

                int id;

                string name;

                double balance;



                cout << "Enter ID: ";

                cin >> id;



                cout << "Enter Name: ";

                cin >> name;



                cout << "Enter Balance: ";

                cin >> balance;



                bank.createAccount(
                    make_shared<CheckingAccount>
                    (id, name, balance)
                );



                cout << "Checking Account Created." << endl;


            }



            else if (choice == 3)
            {

                int id;

                double amount;



                cout << "Account ID: ";

                cin >> id;



                cout << "Amount: ";

                cin >> amount;



                bank.deposit(id, amount);



                fileManager.saveTransaction(
                    "Deposit amount: "
                    + to_string(amount)
                    + " Account: "
                    + to_string(id)
                );



                cout << "Deposit Done." << endl;


            }



            else if (choice == 4)
            {

                int id;

                double amount;



                cout << "Account ID: ";

                cin >> id;



                cout << "Amount: ";

                cin >> amount;



                bank.withdraw(id, amount);



                fileManager.saveTransaction(
                    "Withdraw amount: "
                    + to_string(amount)
                    + " Account: "
                    + to_string(id)
                );



                cout << "Withdraw Done." << endl;


            }



            else if (choice == 5)
            {

                int fromId;

                int toId;

                double amount;



                cout << "From Account: ";

                cin >> fromId;



                cout << "To Account: ";

                cin >> toId;



                cout << "Amount: ";

                cin >> amount;




                bank.transfer(fromId, toId, amount);



                fileManager.saveTransaction(
                    "Transfer amount: "
                    + to_string(amount)
                    + " From: "
                    + to_string(fromId)
                    + " To: "
                    + to_string(toId)
                );



                cout << "Transfer Done." << endl;


            }



            else if (choice == 6)
            {

                bank.displayAccounts();

            }



            else if (choice == 7)
            {

                cout << "Saving data..." << endl;

            }



            else
            {

                cout << "Invalid choice." << endl;

            }


        }



        catch(exception& e)
        {

            cout << "Error: "
                 << e.what()
                 << endl;

        }



    } while(choice != 7);



    return 0;

}
