//write includes statements
#include"loops.h"
#include<iostream>

//write using statements for cin and cout
using std::cout;
using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	auto user_choice = 'y';
	int num = 0;
	int result = 0;

	do
	{
		cout << "Enter a numer: ";
		cin >> num;
		result = function_factorial(num);
		cout << "Factorial: " << result;

		cout << "Continue: y or n? ";
		cin >> user_choice;
	} while (user_choice == 'y' || user_choice == 'Y');

	return 0;
}