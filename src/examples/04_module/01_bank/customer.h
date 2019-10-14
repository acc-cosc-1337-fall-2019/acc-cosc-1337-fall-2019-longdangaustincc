//customer.h
#include <iostream>
#include <vector>
#include "bank_account.h"

using std::ostream;
using std::vector;

class Customer
{
public:
	void add_account(BankAccount act);
	friend ostream & operator << (ostream & out, const Customer & c);

private:
	vector <BankAccount> accounts;
	int total_balance{ 0 };
};