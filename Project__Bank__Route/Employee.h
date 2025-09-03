#pragma once
#include "Perosn.h"
#include "Client.h"

class Employee : public Person {
protected:
    double salary = 0;
    Client clients[100];
    int clientCount = 0;

public:
    Employee() {}
    Employee(int id, string name, string password, double salary) {
        setId(id);
        setName(name);
        setPassword(password);
        setSalary(salary);
    }

    void setSalary(double salary) {
        if (Validation::validateSalary(salary))
            this->salary = salary;
        else
            cout << "Invalid salary! Must be >= 5000.\n";
    }
    double getSalary() const { return salary; }

    void login(int id, string password) {
        if (this->id == id && this->password == password)
            cout << "Login successful. Welcome " << this->name << "!\n";
        else
            cout << "Login failed. Invalid ID or password.\n";
    }

    void newClient(int id, string name, string password, double balance) {
        clients[clientCount].setId(id);
        clients[clientCount].setName(name);
        clients[clientCount].setPassword(password);
        clients[clientCount].setBalance(balance);
        clientCount++;
        cout << "New client added successfully!\n";
    }

    void searchClient(int id) {
        for (int i = 0; i < clientCount; i++) {
            if (clients[i].getId() == id) {
                cout << "Client found: ";
                clients[i].display();
                return;
            }
        }
        cout << "Client not found.\n";
    }

    void listAllClients() {
        if (clientCount == 0) {
            cout << "No clients available.\n";
            return;
        }
        cout << "--- Clients List ---\n";
        for (int i = 0; i < clientCount; i++) {
            clients[i].display();
        }
    }

    void editClient(int id, string newName, string newPassword, double newBalance) {
        for (int i = 0; i < clientCount; i++) {
            if (clients[i].getId() == id) {
                clients[i].setName(newName);
                clients[i].setPassword(newPassword);
                clients[i].setBalance(newBalance);
                cout << "Client updated successfully!\n";
                return;
            }
        }
        cout << "Client not found.\n";
    }

    void displayInfo() {
        cout << "--- Employee Info ---\n";
        cout << "ID: " << id
            << " | Name: " << name
            << " | Salary: " << salary << endl;
    }
};

