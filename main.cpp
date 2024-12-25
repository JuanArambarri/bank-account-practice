#include <iostream>
#include "Person.h"
#include "Interfaces.h"
#include "BankAccount.h"
#include <vector>
#include "limits"

int main() {
    std::vector<Person> users;
    Interfaces::starterMenu();
    char input;
    std::cin >> input;
    while(input != 'Y' && input != 'N' && input != 'y' && input != 'n'){
        std::cout << "please type 'y' or 'n'.\n";
        std::cin >> input;
    }
    int idNumber;
    if(input == 'y' || input == 'Y'){
        std::cout << "please write your ID number\n";
        std::cin >> idNumber;
//        if (BankAccount::findUser(idNumber)){
//            std::cout << "Welcome " ; // has to call the account owner's name.
//        }else while(!BankAccount::findUser(idNumber)){
//            std::cout << "The ID provided does not match any user.\n";
//        }
    }else{
        Person aPerson = Interfaces::createPerson();
        users.push_back(aPerson);
        //::createUser(); should call a function called create user that shows a step by step process of creating a user
        //Should call another function that creates the struct + bank account
    }
    bool exit = false;
    while(!exit){
        std::cout << "Welcome to Nook Bank\n" << users[0].name << " - " << users[0].id << "\n";
        Interfaces::userMenu();
        int input;
        std::cout <<"... ";
        std::cin >> input;
        while (true){
            std::cin >> input;
            if (std::cin.fail() && input >= 0 && input < 6){
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
                std::cout << "Invalid input. Please enter a valid age: ";
            }else break;
        }
        switch (input) {
            case 1:
                std::cout << "check balance.";
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
                exit = true;
                break;
            default:
               break;
        }
    }
    return 0;
}
