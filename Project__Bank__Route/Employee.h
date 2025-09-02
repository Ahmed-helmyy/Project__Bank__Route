#pragma once
#include "Perosn.h"
using namespace std;
#include <string>
#include <iostream>
#include "Client.h"
class Employee :public Person
{
	double salary;
	Client clients[100];
	int clientCount = 0; 
public:
	void login(int id, string password) {
		if (this->id == id && this->password == password) {
			cout << "Login successful. Welcome " << this->name << "!" << endl;
		}
		else {
			cout << "Login failed. Invalid ID or password." << endl;

		}

	}
	void NewClient(int id, string name, string password, double balance) {
		clients[clientCount].setId(id);
		clients[clientCount].setName(name);
		clients[clientCount].setPassword(password);
		clients[clientCount].setBalance(balance);

		clientCount++; 
		cout << "New client added successfully!" << endl;
	}

	void search(int id) {
		for (int i = 0; i < clientCount; i++) {
			if (clients[i].getId() == id) {
				cout << "Client found: " << clients[i].getName()
					<< " | Balance: " << clients[i].getBalance() << endl;
				return;
			}
		}
		cout << "Client not found." << endl;
	}

};

