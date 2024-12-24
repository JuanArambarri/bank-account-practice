cmake_minimum_required(VERSION 3.28)
project(bank_account_practice)

set(CMAKE_CXX_STANDARD 26)

add_executable(bank_account_practice main.cpp
        Person.cpp
        Person.h
        Interfaces.cpp
        Interfaces.h
        BankAccount.cpp
        BankAccount.h)
