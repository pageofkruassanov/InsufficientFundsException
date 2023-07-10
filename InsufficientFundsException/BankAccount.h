#pragma once
#include "InsufficientFundsException.h"
class BankAccount
{
	double sum;
public:
	BankAccount(double sum) : sum{ sum } {};
	void addMoney(double amount);
	void withdrawMoney(double amount);
};

