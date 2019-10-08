#include "atm.h"
#include <iostream>

using std::cout;
//atm.cpp

ATM::ATM(BankAccount a) : account(a)
{
	//class that get balance from data base

}

void ATM::deposit(int amount)
{
	account.deposit(amount);
}

void ATM::withdraw(int amount)
{
	account.withdraw(amount);
}

void ATM::display_balance() const
{
	cout << "Balance: " << account.get_balance() << "\n";
}
