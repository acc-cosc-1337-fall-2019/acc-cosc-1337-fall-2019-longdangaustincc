//write include statements
#include<iostream>
#include "dna.h"
//write using statements
using std::string;
using std::cout;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	auto user_choice = 'y';

	do
	{
		cout << "Would you like to re-enter the dna: Y or N ? ";
	} while (user_choice == 'y' || user_choice == 'Y');

	return 0;
}