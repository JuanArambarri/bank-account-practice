//
// Created by bauli on 2024/12/23.
//

#include "BankAccount.h"




BankAccount::BankAccount() {};
BankAccount::BankAccount(double funds,int accountID, std::string password): funds(0.0),accountID(id),password(BankAccount::passwordRandomizer()) {}
static bool findAccount(int idnumber, std::vector<BankAccount> &account){
    for (int i = 0; i < account.size(); ++i) {
        if (account[i].id == idnumber) {
            return true;
        }
    }
    return false;
}
bool BankAccount::findUser(std::vector<Person> &persons, int idnumber) {
    for (int i = 0; i < persons.size(); ++i) {
        if (persons[i].id == idnumber) {
            return true;
        }
    }
    return false;
}
bool BankAccount::findAccount(int idnumber, std::vector<BankAccount> &account) {
    for (int i = 0; i < account.size(); ++i) {
        if (account[i].id == idnumber) {
            return true;
        }
    }
    return false;
}
std::string BankAccount::passwordRandomizer() {
    std::string password;
    char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    for (int i = 0; i < 8; ++i) {
        password += letters[rand()%62];
    }
    return password;
}
