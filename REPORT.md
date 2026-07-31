Bank System - C++ Final Project Report

1. Project Description

The Bank System is a simple console application built using C++.

The purpose of this project is to create a basic banking system that allows users to manage bank accounts and perform different banking operations.

Users can create accounts, deposit money, withdraw money, transfer money between accounts, and view account information.

The project uses Object-Oriented Programming concepts to organize the code into different classes and make the system easier to understand and maintain.



2. Class Design and UML Overview

The project is divided into several classes, where each class has a specific responsibility:

* Account: The main base class that contains common information for all accounts such as account ID, owner name, and balance. It is an abstract class.
* SavingAccount: A class that represents saving accounts and inherits from the Account class.
* CheckingAccount: A class that represents checking accounts and also inherits from the Account class.
* Bank: Responsible for managing accounts and performing banking operations.
* FileManager: Used to save account data and load it from files.
* Transaction: Stores information about account transactions and keeps transaction history.

The relationship between classes is based on inheritance and polymorphism, where different account types share common features from the Account class.



3. OOP Concepts Implementation

Encapsulation

The account information is kept inside the Account class and cannot be accessed directly from outside the class.

Public functions like deposit(), withdraw(), and display() are used to work with the account data.



Inheritance

The SavingAccount and CheckingAccount classes inherit common data and functions from the Account base class.

This reduces code repetition and allows the derived classes to reuse existing features.



Polymorphism

Virtual functions are used in the Account class, which allows different account types to work using the same base class reference.

Each account type can provide its own implementation when needed.



Abstraction

The Account class is an abstract class because it contains a pure virtual function getType().

This function must be implemented by the classes that inherit from Account.


4. File Structure

The project is divided into different header and source files to keep the code organized.

Header files (.h) contain class definitions, while source files (.cpp) contain the implementation of these classes.

The main project files are:

* Account.h / Account.cpp
* SavingAccount.h / SavingAccount.cpp
* CheckingAccount.h / CheckingAccount.cpp
* Bank.h / Bank.cpp
* FileManager.h / FileManager.cpp
* Transaction.h / Transaction.cpp
* BankExceptions.h
* main.cpp

The system also uses files to save data:

* accounts.txt is used to store account information.
* transactions.txt is used to store transaction records with timestamps.



5. Exception Handling Scenarios

The system uses exception handling to manage invalid operations and prevent program errors.

1. Invalid Amount

The system does not allow entering negative or zero values when depositing or withdrawing money.

2. Account Not Found

An exception is generated when the user tries to access an account with an ID that does not exist.

3. Insufficient Balance

The system prevents withdrawing or transferring money if the requested amount is greater than the available balance.



6. Modern C++ Features Used

The project uses some modern C++ features, including:

* std::shared_ptr for managing objects dynamically.
* std::vector for storing accounts.
* std::string for handling text information.
* Virtual functions to implement polymorphism.



Conclusion

This project shows how Object-Oriented Programming concepts can be used to build a complete banking system.
It also demonstrates using file handling, exception handling, and modern C++ features to create an organized and functional application.
