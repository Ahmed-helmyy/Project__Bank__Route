#pragma once
#include "Validation.h"
#include <string>
#include <iostream>
using namespace std;

class Person : public Validation {
protected:
    int id = 0;
    string name = "";
    string password = "";

public:
    Person() {}
    Person(int id, const string& name, const string& password) {
        setId(id);
        setName(name);
        setPassword(password);
    }

    void setId(int id) { this->id = id; }
    void setName(const string& name) {
        if (Validation::validateName(name))
            this->name = name;
        else
            cout << "Invalid name! Must be 5-20 alphabetic characters.\n";
    }
    void setPassword(const string& password) {
        if (Validation::validatePassword(password))
            this->password = password;
        else
            cout << "Invalid password! Must be 8-20 characters.\n";
    }

    int getId() const { return id; }
    string getName() const { return name; }
    string getPassword() const { return password; }

    virtual void display() const {
        cout << "ID: " << id << " | Name: " << name << endl;
    }
};

