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
	char user_choice = 'y';
	int choice = 0;
	string dna_string;

	do
	{
		cout << "Enter 1 for GC Content or 2 for DNA Complement: ";
		cin >> choice;

		cout << "Enter DNA string: ";
		cin >> dna_string;


		switch (choice)
		{
		case 1:
			cout << get_gc_content(dna_string) << "\n";
			break;

		case 2:
			cout << get_dna_complement(dna_string) << "\n";
			break;

		default:
			cout << "Invalid" << "\n";
		}

		cout << "Would you like to re-enter the dna: Y or N ? ";
		cin >> user_choice;
	} while (user_choice == 'y' || user_choice == 'Y');

	return 0;
}