#pragma once
using namespace std;
#include <string>
#include <iostream>
#include "Validation.h"
class Person :public Validation
{
protected:
    int id;
    string name;
    string password;

public:
    Person(int id, const string& name, const string& password)
        : id(id), name(name), password(password) 
    {
    }

    void setName(const string& name) {
        if (Validation::validateName(name))
            this->name = name;
        else
            cout << "Invalid name! Name must be 5-20 alphabetic characters.\n";
    }

    void setPassword(const string& password) {
        if (Validation::validatePassword(password))
            this->password = password;
        else
            cout << "Invalid password! Password must be 8-20 characters.\n";
    }
    void setid(int id ) {
        this->id = id;
    }

  
    int getId() const { return id; }
    string getName() const { return name; }
    string getPassword() const { return password; }

    virtual void display() const {
        cout << "ID: " << id << ", Name: " << name << "\n";
    }
};





