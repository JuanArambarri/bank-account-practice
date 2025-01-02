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

    Interfaces::starterMenu(accounts, users);
    //Need a getchar or similar to avoid closing.
    return 0;
}
