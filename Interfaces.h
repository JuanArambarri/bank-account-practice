//
// Created by bauli on 2024/12/22.
//

#ifndef BANK_ACCOUNT_PRACTICE_INTERFACES_H
#define BANK_ACCOUNT_PRACTICE_INTERFACES_H
#include <iostream>
#include <vector>
#include "BankAccount.h"
#include "Person.h"


class Interfaces {
public:
    static void starterMenu(std::vector <BankAccount> &accounts, std::vector<Person> &users);
    static bool yesNoValidation(char input);
    static void createUser(std::vector <Person> &users, std::vector <BankAccount> &accounts); //creates a bank account automatically
    static void userMenu(std::vector <BankAccount> &accounts);
    static bool charValidInput(char input);
};


#endif //BANK_ACCOUNT_PRACTICE_INTERFACES_H
