#include <iostream>
#include "atm.h"
#include <vector>

using std::cout;
using std::vector;

int main()
{
	//scan card and enter pin
	//get record from database into a vector
	vector <BankAccount> accounts{ BankAccount(500), BankAccount(600), BankAccount(1000) }; //this is just a mimic of the data base
	ATM atm(accounts[0]);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();

	return 0;
}