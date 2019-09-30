#include<string>
#include<iostream>
#include "for_ranged.h"

using std::string;
int main() 
{
	string test = "hello";
	string test1 = "hi";
	loop_string_w_index(test);
	loop_string_w_auto(test, test1);
	return 0;
}