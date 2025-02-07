//
// Created by bauli on 2024/12/23.
//

#ifndef BANK_ACCOUNT_PRACTICE_BANKACCOUNT_H
#define BANK_ACCOUNT_PRACTICE_BANKACCOUNT_H
#include <iostream>
#include <vector>
#include <string>
#include "Person.h"


class BankAccount:public Person {
public:
    BankAccount();
    BankAccount(double funds, int accountID,std::string password);
    static void showUser(std::vector<BankAccount> &accounts);
    static bool findUser(std::vector<Person> &persons, int idnumber);
    static bool findAccount(int idnumber, std::vector<BankAccount> &account);
    static std::string passwordRandomizer();
    static bool passwordValidator(std::string password, std::vector<BankAccount> &account, int idnumber);
private:
    double funds;
    std::string password;
    int accountID;
};


#endif //BANK_ACCOUNT_PRACTICE_BANKACCOUNT_H
