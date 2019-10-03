#include <iostream>
#include "bank_account.h"
#include <vector>

using std::cout;
using std::vector;

int main()
{
	vector <BankAccount> accounts;
	BankAccount b1;
	accounts.push_back(b1); // create a bank account name b1 with default $ in balance
	accounts.push_back(BankAccount(750)); // create a bank account with $750 in balance

	for (auto account : accounts)
	{
		cout << "Balance: " << account.get_balance();
	}
	return 0;
}