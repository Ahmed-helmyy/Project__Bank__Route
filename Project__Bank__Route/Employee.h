#pragma once
#include "Perosn.h"
using namespace std;
#include <string>
#include <iostream>
#include "Client.h"
class Employee :public Person
{
	double salary;

public:
	void login(int id, string password) {
		if (this->id == id && this->password == password) {
			cout << "Login successful. Welcome " << this->name << "!" << endl;
		}
		else {
			cout << "Login failed. Invalid ID or password." << endl;

		}

	}
	void NewClients(Client &c1,int id,string name,string password,double balance) {
		c1.setName(name);
		c1.setPassword(password);
		c1.setbalance(balance);
		c1.setid(id);

		cout << "New client added successfully!" << endl;
	}

};

