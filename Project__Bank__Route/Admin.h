#pragma once
#include "Employee.h"
using namespace std;
#include <string>
#include <iostream>
class Admin : public Employee
{

private:

	double salary;
public:
	//Constructors:
	//default:
	Admin() {
		this->salary = 0;
	}

	//Parameterized:
	Admin(int id, string name, string password, double salary) {
		this->id = id;
		this->name = name;
		this->password = password;
		this->salary = salary;
	}

	//setters:
	void set_id(int id) {

		this->id = id;
	}
	void set_name(string name) {

		if (Validation::validateName(name)) {
			this->name = name;
		}
		else {
			cout << "Invalid name! Name must be 5-20 alphabetic characters.\n";
		}

	}
	void set_password(string password) {

		if (Validation::validatePassword(password))
			this->password = password;
		else {
			cout << "Invalid password! Password must be 8-20 characters.\n";
		}

	}
	void set_salary(double salary) {

		if (Validation::validateSalary(salary))
			this->salary = salary;

	}

	//getter:

	int get_id() {
		return this->id;
	}

	string get_name() {
		return this->name;
	}

	string get_password() {
		return this->password;
	}

	double get_salary() {
		return this->salary;
	}

	//print information :

	void display_information() {

		cout << "id      =" << id << endl;
		cout << "name    =" << name << endl;
		cout << "password=" << password << endl;
		cout << "salary  =" << salary << endl;
	}
};