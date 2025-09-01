#include "Client.h"

Client::Client(string name, string password, int accNum, double bal)
    : Person(name, password), accountNumber(accNum), balance(bal) {}

void Client::setAccountNumber(int accNum) {
    accountNumber = accNum;
}

int Client::getAccountNumber() const {
    return accountNumber;
}

void Client::setBalance(double bal) {
    balance = bal;
}

double Client::getBalance() const {
    return balance;
}

void Client::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    } else {
        cout << "Invalid deposit amount!" << endl;
    }
}

bool Client::withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
        return true;
    } else {
        cout << "Invalid withdrawal or insufficient funds!" << endl;
        return false;
    }
}

void Client::displayInfo() const {
    cout << "Client Name: " << getName() << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Balance: " << balance << endl;
}

