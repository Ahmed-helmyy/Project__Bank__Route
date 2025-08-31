#pragma once
using namespace std;
#include <string>
#include <iostream>
class Validation
{
public:
    static bool validateName(const string& name) {
        if (name.size() < 5 || name.size() > 20)
            return false;
        for (char ch : name) {
            if (!isalpha(ch)) // Check if all characters are alphabetic
                return false;
        }
        return true;
    }

    static bool validatePassword(const string& password) {
        return password.size() >= 8 && password.size() <= 20;
    }

    static bool validateBalance(double balance) {
        return balance >= 1500;
    }

    static bool validateSalary(double salary) {
        return salary >= 5000;
    }

};

