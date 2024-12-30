//
// Created by bauli on 2024/12/22.
//

#ifndef BANK_ACCOUNT_PRACTICE_INTERFACES_H
#define BANK_ACCOUNT_PRACTICE_INTERFACES_H
#include <iostream>
#include "Person.h"


class Interfaces {
public:
    static void starterMenu();
    static Person createPerson();
    static void userMenu();
    static bool charValidInput(char input);
};


#endif //BANK_ACCOUNT_PRACTICE_INTERFACES_H
