/*
Name: Michael Alvarez
Date: April 26, 2020
Desc: Assignment and Increment Operators, the manipulation of increment operators
*/


#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int y = 10;

	x += 2;  //increment operator

	cout << x << endl; //12 is printed

	cout << ++y << endl; //adds 1 before the code initialized.
	cout << y++ << endl; //adds 1 after the code initialized, not during.


}