#include <iostream>
#include <string>
#include <victor>
#include<fstream>
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
// -------------------- Parser --------------------
class Parser {
public:
    static vector<string> split(string line) {
        vector<string> tokens;
        string token;
        for (char c: line) {
            if (c == '|') {
                tokens.push_back(token);
                token.clear();
            } else {
                token.push_back(c);
            }
        }
        tokens.push_back(token);
        return tokens;
    }

    static Client parseToClient(string line) {
        vector<string> parts = split(line);
        Client c;
        c.setId(stoi(parts[0]));
        c.setName(parts[1]);
        c.setPassword(parts[2]);
        c.setBalance(stod(parts[3]));
        return c;
    }
};

// -------------------- FilesHelper --------------------
class FilesHelper {
public:
    static void saveClient(Client c) {
        ofstream file("Clients.txt", ios::app);
        if (file.is_open()) {
            file << c.getId() << "|"
                    << c.getName() << "|"
                    << c.getPassword() << "|"
                    << c.getBalance() << "" << endl;
            file.close();
        }
    }

    static vector<Client> getClients() {
        vector<Client> clients;
        ifstream file("Clients.txt");
        string line;
        while (getline(file, line)) {
            Client c = Parser::parseToClient(line);
            clients.push_back(c);
        }
        file.close();
        return clients;
    }

    static void clearClients() {
        ofstream file("Clients.txt", ios::trunc);
        file.close();
    }
};

