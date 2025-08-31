#pragma once
#include "Perosn.h"
using namespace std;
#include <string>
#include <iostream>
class Client :public Person
{
	double balance;
public:
	void setbalance(double balance) {
		this->balance = balance;
	}

};

