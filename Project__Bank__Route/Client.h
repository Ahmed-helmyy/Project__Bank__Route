#include "Perosn.h"
#pragma once
class Client : public Person {
    double balance = 0;
public:
    Client() {}
    Client(int id, string name, string password, double balance) {
        setId(id);
        setName(name);
        setPassword(password);
        setBalance(balance);
    }

    void setBalance(double balance) {
        if (Validation::validateBalance(balance))
            this->balance = balance;
        else
            cout << "Invalid balance! Must be >= 1500.\n";
    }

    double getBalance() const { return balance; }

    void display() const override {
        cout << "ID: " << getId()
            << " | Name: " << getName()
            << " | Balance: " << balance << endl;
    }
};
