//
// Created by bauli on 2024/12/22.
//

#ifndef BANK_ACCOUNT_PRACTICE_PERSON_H
#define BANK_ACCOUNT_PRACTICE_PERSON_H
#include <iostream>


struct Person {
    Person();
    Person(int age, std::string name, std::string nationality, int id);
    int age;
    std::string name;
    std::string nationality;
    int id;
};


#endif //BANK_ACCOUNT_PRACTICE_PERSON_H
