//
// Created by bauli on 2024/12/23.
//

#include "BankAccount.h"


bool BankAccount::findUser(std::vector<Person> persons, int idnumber) {
    for (int i = 0; i < persons.size(); ++i) {
        if (persons[i].id == idnumber) {
            return true;
        } else return false;
    }
    return false;
};
