#include <iostream>
#include "Person.h"
#include "Interfaces.h"

int main() {
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
    }else{
        ::createUser(); //should call a function called create user that shows a step by step process of creating a user
        //Should call another function that creates the struct + bank account
    }
    return 0;
}
