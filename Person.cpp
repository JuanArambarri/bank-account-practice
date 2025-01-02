//
// Created by bauli on 2024/12/22.
//

#include "Person.h"

Person::Person():age(30),name("John Doe"),nationality("NA"),id(0000000) {};
Person::Person(int age, std::string name, std::string nationality, int id):
age(age),name(name),nationality(nationality),id(id){};
struct Person aPerson;
