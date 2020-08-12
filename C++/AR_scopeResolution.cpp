
/*
Name: Michael Alvarez
Date: May 8, 2020
Desc:  unary scope resolution operator, "::"
local variables are variables within a function
Global variables are variables outside functions
to access Global variables, you need to use the unary scope resolution operator, "::var"
this is handy for when there are dupe names of different datatypes (int/double/string)
*/

#include <iostream>
using namespace std;

int num = 20; //whenever variable is outside function, any function can use this particular variable.

int main()
{
	int num = 40; //local variable will always be chosen first
	cout << ::num << endl;
}

void bucky() {
	cout << num << endl; //this would print 20
}