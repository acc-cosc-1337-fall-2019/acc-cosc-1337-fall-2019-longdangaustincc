//bank_account.cpp
#include "bank_account.h"
BankAccount::BankAccount()
{
	balance = 500;
}

void BankAccount::deposit(int amount)
{
	if (amount > 0)
	{
		balance = balance + amount; // same as balance += amount
	}
}

int BankAccount::get_balance()
{
	return balance;
}
