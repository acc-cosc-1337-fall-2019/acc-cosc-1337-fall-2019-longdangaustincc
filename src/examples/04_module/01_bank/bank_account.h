//bank_account.h
#ifndef BANK_ACCOUNT_H //header guards: prevent class redefintion error
#define BANK_ACCOUNT_H
class  BankAccount
{
public:
	BankAccount();
	BankAccount(int b) : balance(b) {}; //inline constructor
	void deposit(int amount);
	void withdraw(int amount);
	int get_balance() const;

private:
	int balance;

};

#endif