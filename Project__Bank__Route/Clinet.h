#pragma once
#include <string>
#include <iostream>
#include "Person.h"
using namespace std;

class Client : public Person {
private:
    int accountNumber;
    double balance;

public:
    Client(string name = "", string password = "", int accNum = 0, double bal = 0.0);

    void setAccountNumber(int accNum);
    int getAccountNumber() const;

    void setBalance(double bal);
    double getBalance() const;

    void deposit(double amount);
    bool withdraw(double amount);
    void displayInfo() const;
};
