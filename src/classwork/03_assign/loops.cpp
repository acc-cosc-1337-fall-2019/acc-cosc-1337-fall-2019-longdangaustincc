#include "loops.h"
/*
WITH LOOP OF YOUR CHOICE:
Write code for function factorial that accepts an int num
and returns the num's factorial

factorial(5);
1*2*3*4*5

returns 120

DON'T FORGET TO WRITE TEST CASE.  See file loop_test.cpp
*/

int function_factorial(int num)
{
	auto factor_num = 1;
	auto i = 1;

	while (i <= num)
	{
		factor_num = factor_num * i;
		i++;
	}
	return factor_num;
}
