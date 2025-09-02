#include <iostream>
#include <string>
using namespace std;

class Client {
private:
    int id;
    string name;
    string password;
    int accountNumber;
    double balance;

public:
  
    Client(int id = 0, string name = "", string password = "", int accNum = 0, double bal = 0.0)
        : id(id), name(name), password(password), accountNumber(accNum), balance(bal) {
    }

   
    void setId(int id) { this->id = id; }
    int getId() const { return id; }

    void setName(string name) { this->name = name; }
    string getName() const { return name; }

    void setPassword(string password) { this->password = password; }
    string getPassword() const { return password; }

    void setAccountNumber(int accNum) { accountNumber = accNum; }
    int getAccountNumber() const { return accountNumber; }

    void setBalance(double bal) { balance = bal; }
    double getBalance() const { return balance; }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
        }
        else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
            return true;
        }
        else {
            cout << "Invalid withdrawal or insufficient funds!" << endl;
            return false;
        }
    }

    void displayInfo() const {
        cout << "Client ID: " << id << endl;
        cout << "Client Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};
