#include <iostream>
#include "Person.h"
#include "Interfaces.h"
#include "BankAccount.h"
#include <vector>

int main() {
    std::vector<Person> users;
    Interfaces::showMenu();
    char input;
    std::cin >> input;
    while(input != 'Y' && input != 'N' && input != 'y' && input != 'n'){
        std::cout << "please type 'y' or 'n'.";
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
        std::cout << users[0].nationality; //test vector workability.
        //::createUser(); should call a function called create user that shows a step by step process of creating a user
        //Should call another function that creates the struct + bank account
    }
    return 0;
}
