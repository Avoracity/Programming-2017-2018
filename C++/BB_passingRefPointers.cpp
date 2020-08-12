/*
Name: Michael Alvarez
Date: May 23, 2020
Desc: passing by reference with pointers
passing by reference doesnt require for the variables to make multiple copies of itself.
when you pass variables from one function to the other, the variable is copied over (but not the variable itself) , which causes less stress on your PC
passing by reference means to pass the variable's address.

*/

#include <iostream>
using namespace std;

void passByValue(int x);
void passByRef(int *x);

int main(){
	int testA = 12;
	int testB = 12;

	passByValue(testA);
	passByRef(&testB); //inserts memory addr into the function.

	cout << "current value: " << testA << endl;
	cout << "current value: " << testB << endl;

	}

void passByValue (int x){
	x = 99; //local change of testA and testB within function.
}

void passByRef(int *x){ //functions that recieves memory addresses needs a pointer argument bc pointers recieves memory adr. args
	*x = 66;   //when testA or testB is passed through, the variable's value is directly changed globally.
}
