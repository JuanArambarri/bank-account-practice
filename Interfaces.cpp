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
bool Interfaces::yesNoValidation(char input) {
    while(input != 'Y' && input != 'N' && input != 'y' && input != 'n'){
        std::cout << "please type 'y' or 'n'.\n";
        std::cin >> input;
    }
    if (input == 'y' || input == 'Y') return true;
    else return false;
}

void Interfaces::userMenu(std::vector <BankAccount> &accounts) {
    std::cout << "Welcome to Nook Bank\n" << accounts[0].name << " - " << accounts[0].id << "\n"; //review
    std::cout << "Please choose one of the following options by their number.\n";
    std::cout << "1. Check Balance.\n";
    std::cout << "2. Withdraw.\n";
    std::cout << "3. Deposit.\n";
    std::cout << "4. Transfer.\n";
    std::cout << "5. Create a fixed term investment.\n";
    std::cout << "6. View fixed term rates.\n";
    std::cout << "0. Exit";
    std::cout << "..." << std::endl;
    int input;
    std::cin >> input;
    while (true){
        std::cin >> input;
        if (std::cin.fail() && input >= 0 && input < 6){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Invalid input. Please enter a valid input: ";
        }else break;
    }
    switch (input) {
        case 1:
            std::cout << "Check balance.";
            break;
        case 2:
            std::cout << "Withdraw.";
            break;
        case 3:
            std::cout << "Deposit.";
            break;
        case 4:
            std::cout << "Transfer.";
            break;
        case 5:
            std::cout << "Fixed term investment";
            break;
        case 0:
            std::cout << "Thank you for using Nook Bank.";
            break;
    }
}

void Interfaces::starterMenu(std::vector <BankAccount> &accounts, std::vector<Person> &users) {
    std::cout << "Welcome to Nook Bank\n";
    std::cout << "----------------------\n";
    std::cout << "are you a new or existing user? (y/n)";
    char input;
    std::cin >> input;
    if (Interfaces::yesNoValidation(input)) {
        std::cout << "Please input your id number\n";
        int idNumber;
        std::cin >> idNumber;
        if (BankAccount::findUser(users, idNumber)) {
            std::cout << "Welcome back, user!\n";
            /*
             * if (BankAccount::findAccount(idNumber,accounts)){
             * std::cout << "please input your password: \n";
             *}
             */
        } else {
            std::cout << "The ID provided does not match any user.\n";
            std::cout << "Would you like to create a user?(y/n)\n";
            std::cin >> input;
        }
    }
}
//! REFERENCE
//    if (input == 'y' || input == 'Y') {
//        std::cout << "please write your ID number\n";
//        std::cin >> idNumber;
//        if (BankAccount::findUser(users, idNumber)) {
//            std::cout << "Welcome back, user!\n";
//        } else {
//            std::cout << "The ID provided does not match any user.\n";
//            std::cout << "Would you like to create a user?(y/n)\n";
//            std::cin >> input;
//            if (Interfaces::yesNoValidation(input)){
//                Person aPerson = Interfaces::createUser(&users, &accounts);
//                users.push_back(aPerson);
//            }else{
//                std::cout << "Thank you for using Nook Bank ATM.\n";
//            }
//        }
//    }else{
//        std::cout << "Would you like to create a user?(y/n)\n";
//        std::cin >> input;
//        while (!Interfaces::charValidInput(input)) {
//            std::cout << "please type 'y' or 'n'.\n";
//            std::cin >> input;
//        }
//        if (input == 'y' || input == 'Y'){
//            Person aPerson = Interfaces::createPerson();
//            users.push_back(aPerson);
//        }else{
//            std::cout << "Thank you for using Nook Bank ATM.\n";
//        }
//    }
void Interfaces::createUser(std::vector <Person>* users, std::vector <BankAccount>* accounts) {
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
    users->push_back(aPerson);
}
