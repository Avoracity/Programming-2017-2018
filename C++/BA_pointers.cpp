/*
Name: Michael Alvarez
Date: May 23, 2020
Desc: memory addresses and pointers
pointers is a variable that points to a memory address.
*/

#include <iostream>
using namespace std;

int main(){

	int product = 2;
	cout << &product << endl; //this prints out the memory address of product , "&" is the memory address operator

	int *productPointer; //this is a declared pointer indicated by "*". pointers need to be declared only once.
	productPointer = &product; //memory address can only be assigned to pointer variables.
	cout << productPointer << endl;

}
