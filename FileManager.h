#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <iostream>
#include <fstream>
#include <vector>
#include <memory>

#include "Account.h"

using namespace std;


class FileManager
{

public:

    void saveAccounts(vector<shared_ptr<Account>> accounts);


    vector<shared_ptr<Account>> loadAccounts();


    void saveTransaction(string text);

};


#endif
