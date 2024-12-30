//
// Created by bauli on 2024/12/23.
//

#ifndef BANK_ACCOUNT_PRACTICE_BANKACCOUNT_H
#define BANK_ACCOUNT_PRACTICE_BANKACCOUNT_H
#include <iostream>
#include <vector>
#include "Person.h"


class BankAccount {
public:
    static bool findUser(std::vector<Person> persons, int idnumber);

};


#endif //BANK_ACCOUNT_PRACTICE_BANKACCOUNT_H
