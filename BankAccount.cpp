//
// Created by bauli on 2024/12/23.
//

#include "BankAccount.h"




BankAccount::BankAccount() {};
BankAccount::BankAccount(double funds,int accountID, std::string password): funds(0.0),accountID(id),password(BankAccount::passwordRandomizer()) {}
bool BankAccount::findUser(std::vector<Person> &persons, int idnumber) {
    if(persons.empty()){
        std::cout << "There are no users in the system!\n";
        return false;
    }
    for (int i = 0; i < persons.size(); ++i) {
        if (persons[i].id == idnumber) {
            return true;
        }
    }
    return false;
}
bool BankAccount::findAccount(int idnumber, std::vector<BankAccount> &accounts) {
    if(accounts.empty()){
        std::cout << "There are no users in the system!\n";
        return false;
    }
    for (int i = 0; i < accounts.size(); ++i) {
        if (accounts[i].id == idnumber) {
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
bool BankAccount::passwordValidator(std::string password, std::vector<BankAccount> &account, int idnumber){
    for (int i = 0; i < account.size(); ++i) {
        if (account[i].id == idnumber){
            if (account[i].password == password){
                return true;
            }
        }
    }
    return false;
}
void BankAccount::showUser(std::vector<BankAccount> &accounts) {
    std::cout << "Please input your ID Number\n";
    int idnumber;
    std::cin >> idnumber;
    if (!accounts.empty()){
        for (int i = 0; i <= accounts.size(); ++i) {
            if (accounts[i].id == idnumber){
                std::cout << "Welcome to Nook Bank\n" << accounts[i].name << " - " << accounts[i].id << "\n";
            }
        }
    }
}
