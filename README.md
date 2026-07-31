Bank System - C++ Final Project

Project Description

This project is a simple console-based Bank System developed using C++.

The main idea of the project is to create a small banking application where users can manage their accounts. The system allows creating different types of accounts, adding money, withdrawing money, transferring money between accounts, and showing account details.

The project is built using Object-Oriented Programming concepts and some modern C++ features.



System Features

The system provides the following operations:

* Create Savings and Checking accounts.
* Deposit money into an account.
* Withdraw money while checking the available balance.
* Transfer money from one account to another.
* Display all available accounts.
* Save account information in files.
* Load saved accounts automatically when the program starts.
* Store all transactions with their date and time.
* Handle wrong inputs and invalid operations using exceptions.



OOP Concepts Used

Encapsulation

The account data is kept private inside the classes, and the user can access or modify the data through public functions.

Inheritance

The classes SavingAccount and CheckingAccount inherit from the main Account class, which allows them to share common properties and functions.

Polymorphism

Virtual functions are used to allow different account types to be handled through the base Account class.

Abstraction

The Account class is an abstract class because it contains a pure virtual function getType() that must be implemented by the derived classes.



C++ Concepts Used

* Using shared_ptr for managing objects dynamically.
* Using vector from STL to store bank accounts.
* Using find_if algorithm to search for specific accounts.
* Dividing the project into multiple classes and files to make the code more organized.



Project Structure

BankSystem
├── main.cpp
├── Account.h
├── Account.cpp
├── SavingAccount.h
├── SavingAccount.cpp
├── CheckingAccount.h
├── CheckingAccount.cpp
├── Bank.h
├── Bank.cpp
├── FileManager.h
├── FileManager.cpp
├── BankExceptions.h
├── Transaction.h
├── Transaction.cpp
├── accounts.txt
└── transactions.txt



File Handling

The project uses files to save and load data.

accounts.txt

This file stores account information such as:

* Account type
* Account ID
* Account owner name
* Account balance

transactions.txt

This file stores transaction details such as:

* Transaction date and time
* Operation description
* Transaction amount



Exception Handling

The system handles different types of errors, for example:

1. Entering an invalid amount during deposit or withdrawal.
2. Trying to access an account that does not exist.
3. Trying to withdraw or transfer an amount greater than the current balance.



How to Run the Project

Compile all project files using:

g++ main.cpp Account.cpp Bank.cpp FileManager.cpp SavingAccount.cpp CheckingAccount.cpp Transaction.cpp -o BankSystem

Then run the program:

./BankSystem



Example Operations

The user can perform different operations such as:

* Creating a new account.
* Depositing money.
* Withdrawing money.
* Transferring money between accounts.
* Displaying account information.

BankSystem

├── main.cpp

├── Account.h
├── Account.cpp

├── SavingAccount.h
├── SavingAccount.cpp

├── CheckingAccount.h
├── CheckingAccount.cpp

├── Bank.h
├── Bank.cpp

├── FileManager.h
├── FileManager.cpp

├── BankExceptions.h

├── Transaction.h
├── Transaction.cpp

├── accounts.txt

└── transactions.txt

File Handling

The project uses files to save and load data.

accounts.txt

This file stores account information such as:

* Account type
* Account ID
* Account owner name
* Account balance

transactions.txt

This file stores transaction details such as:

* Transaction date and time
* Operation description
* Transaction amount



Exception Handling

The system handles different types of errors, for example:

1. Entering an invalid amount during deposit or withdrawal.
2. Trying to access an account that does not exist.
3. Trying to withdraw or transfer an amount greater than the current balance.



How to Run the Project

Compile all project files using:
g++ main.cpp Account.cpp Bank.cpp FileManager.cpp SavingAccount.cpp CheckingAccount.cpp Transaction.cpp -o BankSystem

Then run the program:
./BankSystem

Example Operations

The user can perform different operations such as:

* Creating a new account.
* Depositing money.
* Withdrawing money.
* Transferring money between accounts.
* Displaying account information.
