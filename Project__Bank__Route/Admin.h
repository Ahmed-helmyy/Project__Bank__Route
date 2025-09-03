#pragma once
#include "Employee.h"

class Admin : public Employee {
public:
    Admin() {}
    Admin(int id, string name, string password, double salary)
        : Employee(id, name, password, salary) {
    }

    void display_information() {
        cout << "--- Admin Info ---\n";
        cout << "ID: " << id
            << " | Name: " << name
            << " | Password: " << password
            << " | Salary: " << salary << endl;
    }
};
