/*
Name: Michael Alvarez
Date: May 8, 2020
Desc: Recursions; methodology of a function being able to call itself.
recursives requires a base case
program to factor  factorials i.e 3! ; 3 * 2 * 1
recursions are fairly uncommon in usage, but has its uses.
*/

#include <iostream>
using namespace std;

void recursive() {
	cout << "testing";
	recursive(); //infinite loop, causes executable file to crash. Do not use this method.
}

void factorials(int x) {
	if (x==1){     //the if else statement is considered the base case.
		return 1;  // endpoint;  it ensures that the program ends at 1, otherwise will return inputted factoria
	}else{
		return x*factorials(x-1); //returns inputted number multiplied...
		//recursively check if inputted number-1 is not 1, then multiply.
	}

}

int main()
{
	//recursive();
	cout << factorials(); << endl;
}