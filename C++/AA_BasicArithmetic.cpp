/*
Name: Michael Alvarez
Date: March 27, 2019
Desc: Arithmetic Calculator that takes input and returns result of different arithmetic operations.

*/

#include <iostream>
using namespace std;


int main(){
	int a, b;

	cout << "set a : ";
	cin >> a;
	cout << "set b : ";
	cin >> b;

    cout << "a+b = " << a+b << endl;
	cout << "a-b = " << a-b << endl;
	cout << "a*b = " << a*b << endl;

	cout << "a/b = " << a/b << endl;
	cout << "The remainder is ";					//does not endline so that the conclusion can be determined.
	if(a%b == 0){									//checks if there is a remainder by evaluating if the remainder does not exist.
		cout << "not applicable.";

	}
	else{
		cout << a%b << "." << endl;					// if remainder exists, then print out the remainder
	}






	return 0;
}




