//
// Created by bauli on 2024/12/22.
//

#include "Interfaces.h"
#include "limits"

void Interfaces::showMenu() {
    std::cout << "Welcome to Nook Bank\n" ;
    std::cout << "----------------------\n";
    std::cout << "are you a new or existing user? (y/n)";
}
void Interfaces::showUserMenu() {
    std::cout;
}
Person Interfaces::createPerson() {
    std::cout << "Please enter your name. \n";
    std::string name;
    std::cin >> name;
    std::cout << "Please enter your age \n";
    int age;
    while (true){
        std::cin >> age;
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Invalid input. Please enter a valid age: ";
        }else break;
    }

    std::cout << "Please enter your nationality \n";
    std::string nationality;
    std::cin >> nationality;
    std::cout << "Please enter your national ID \n";
    int nationalID;
    while (true){
        std::cin >> nationalID;
        if (std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Invalid input. Please enter a valid age: ";
        }else break;
    }
    Person aPerson (age,name,nationality,nationalID);
    return aPerson;
}
