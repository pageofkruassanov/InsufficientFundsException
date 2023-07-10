#include "BankAccount.h"

void BankAccount::addMoney(double amount)
{
	if (amount <= 0)
		throw InsufficientFundsException("Error input money");
	else
		sum += amount;
}

void BankAccount::withdrawMoney(double amount)
{
	if (sum < amount)
		throw InsufficientFundsException("InsufficientFundsException");
	else 
		sum -= amount;
	
}
