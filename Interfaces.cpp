//
// Created by bauli on 2024/12/22.
//

#include "Interfaces.h"
#include "limits"
#include "string"

bool Interfaces::charValidInput(char input) {
    if (input != 'Y' && input != 'N' && input != 'y' && input != 'n'){
        return false;
    }else return true;
}

void Interfaces::userMenu() {
    std::cout << "Please choose one of the following options by their number.\n";
    std::cout << "1. Check Balance.\n";
    std::cout << "2. Withdraw.\n";
    std::cout << "3. Deposit.\n";
    std::cout << "4. Transfer.\n";
    std::cout << "5. Create a fixed term investment.\n";
    std::cout << "6. View fixed term rates.\n";
    std::cout << "0. Exit";
}

void Interfaces::starterMenu() {
    std::cout << "Welcome to Nook Bank\n" ;
    std::cout << "----------------------\n";
    std::cout << "are you a new or existing user? (y/n)";
}
Person Interfaces::createPerson() {
    std::cout << "Please enter your full name. \n";
    std::string name;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, name); //skipping input;
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
