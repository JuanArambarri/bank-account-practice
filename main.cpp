#include <iostream>
#include "Person.h"
#include "Interfaces.h"
#include "BankAccount.h"
#include <vector>
#include "limits"

int main() {
    srand(time(0));
    std::vector<Person> users;
    std::vector<BankAccount> accounts;
    Interfaces::starterMenu(accounts, users); // welcomes user, verifies if it's an existing user, otherwise creates user/account.
    Interfaces::userMenu(accounts);
    for (int i = 0; i < users.size(); ++i) {
        std::cout << users[i].name << std::endl << users[i].id << std::endl;
    }
    for (int i = 0; i < accounts.size(); ++i) {
        std::cout << accounts[i].name << std::endl << accounts[i].id << std::endl;
    }
    Interfaces::starterMenu(accounts, users);
    //Need a getchar or similar to avoid closing.
    return 0;
}
