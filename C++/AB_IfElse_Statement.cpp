/*
Name: Michael Alvarez
Date: April 1, 2020
Desc: If-else statement that compares two values and returns a evaluated response.
Extra: 
Edited on April 6, 2020. formatted to use function prototype.
Edited on April 22, 2020. Added missing semi-colons and removed parameter for else-statement to debug.

*/

#include <iostream>
using namespace std;

void ifelseStatement(); //function prototype : to allow the main function remain in the beginning of the program, "prototype"/search for function and call accordingly.


int main()
{
	ifelseStatement();
	return 0;
}

void ifelseStatement(){
int a, b;
	cout << "This program will return true if the values being compared, a and b, \n such that the value of a is greater than the value b when you define a and b." << endl;

	cout << "Please set the value for a :";
	cin >> a;
	cout << "Please set the value for b :";
	cin >> b;
		if(a > b){
      cout << a << " is greater than " << b;
		}
		else{
			cout << b << "is greater than " << a;
		}
}
