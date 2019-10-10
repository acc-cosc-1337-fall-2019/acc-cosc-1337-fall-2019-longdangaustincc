#include <iostream>
#include "atm.h"
#include <vector>

using std::cout;
using std::cin;
using std::vector;

int main()
{
	BankAccount a;
	BankAccount b = a; //create a copy of BankAccount a and named b
	display(a); // class friend function
	//scan card and enter pin
	//get record from database into a vector
	vector <BankAccount> accounts{ BankAccount(500), BankAccount(600), BankAccount(1000) }; //this is just a mimic of the data base

	for (auto act : accounts) // cout vector accounts
	{
		cout << act;
	}

	ATM atm(accounts[0]);
	atm.deposit(100);
	atm.withdraw(50);
	atm.display_balance();
	cin >> a;
	cout << a; // overload operator
	

	return 0;
}