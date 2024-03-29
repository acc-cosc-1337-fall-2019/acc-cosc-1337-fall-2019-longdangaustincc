//bank_account.cpp
#include "bank_account.h"
#include <iostream>

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

void BankAccount::withdraw(int amount)
{
	if (balance > amount)
	{
		balance = balance - amount; // same as balance -= amount
	}
}

int BankAccount::get_balance() const
{
	return balance;
}

void display(const BankAccount & account)
{
	std::cout << "Balance: " << account.balance << "\n";
}

std::ostream & operator << (std::ostream & out, const BankAccount & b)
{
	out << "Balance: " << b.balance << "\n";

	return out;
}

std::istream & operator >> (std::istream & in, BankAccount & b)
{
	int atm;
	std::cout << "Enter amount: ";
	in >> atm;
	b.deposit(atm);
	

	return in;
}
