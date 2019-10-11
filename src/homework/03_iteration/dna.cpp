#include "dna.h"
#include <iostream>

using std::cout;

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc_content(const string & dna)
{
	double dna_length = dna.length();
	double gc_count = 0;

	for (int i = 0; i < dna.length(); ++i)
	{
		if (dna[i] == 'G' || dna[i] == 'C')
		{
			++gc_count;
		}
	}
	return gc_count / dna_length;
}

/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
string get_reverse_string(string dna)
{
	string reverse_dna;

	for (int i = dna.length() - 1; i > -1; --i)
	{
		reverse_dna = reverse_dna + dna[i];
	}
	return reverse_dna;
}


/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
string get_dna_complement(string dna)
{
	string complete_dna = get_reverse_string(dna);
	int i = 0;

	while (i < complete_dna.length())
	{
		if (complete_dna[i] == 'A')
		{
			complete_dna[i] = 'T';
		}
		else if (complete_dna[i] == 'T')
		{
			complete_dna[i] = 'A';
		}
		else if (complete_dna[i] == 'C')
		{
			complete_dna[i] = 'G';
		}
		else if (complete_dna[i] == 'G')
		{
			complete_dna[i] = 'C';
		}
		else
		{
			return "Invalid";
		}

		++i;
	}

	return complete_dna;
}