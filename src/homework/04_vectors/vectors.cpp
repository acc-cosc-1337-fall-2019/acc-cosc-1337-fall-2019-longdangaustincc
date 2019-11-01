#include <iostream>
#include "vectors.h"

using std::cout;

/*
Write a value return function get_max_from_vector with a const reference 
vector of intsparameter that returns the max value in a vector

@param numbers is a const reference to a vector of integers
@return the max value in the vector
*/
int get_max_from_vector(const vector<int>& number)
{
	int max_number;

	for (int i = 0; i < number.size(); ++i)
	{
		if (max_number < number[i])
		{
			max_number = number[i];
		}
		else
		{
			max_number = max_number;
		}
	}
	return max_number;
}




/*
Write a function named is_prime with an integer parameter that
given a number returns true if prime or false if not prime

@param number: Any whole number
@return: bool if prime False if not
*/
void is_prime(int number)
{
	bool prime = true;

	if (number < 2)
	{
		cout << number << " False" "\n";
	}
	else
	{
		for (int i = 2; i <= sqrt(number); ++i)
		{
			if (number % i == 0)
			{
				prime = false;
			}
		}

		if (prime == true)
		{
			cout << number << " True" "\n";
		}
		else
		{
			cout << number << " False" "\n";
		}
	}
}


/*
Write a a function named vector_of_primes with an integer parameter
that given a number returns all the prime numbers up to the number

Example given number 10 returns a vector with elements 2,3,5,7,

@param int integer value
@return vector of ints containing prime values up to a value

Make sure to use the is_prime function to determine if current 
number is prime.
*/
vector<int> vector_of_primes(int number)
{
	vector<int> prime_numbers(2);

	for (int i = 2; i <= number; i++)
	{
		prime_numbers.
	}

	return vector<int>();
}
