/*
Michael Alvarez
Assignment: Lab 2D
February 9, 2018
Course: CSCI 136
Professor: Genady Maryash
long int yields 4 bytes or 32 bits.
fibonacci series overflows the integer, yielding numbers beyond the representation of 32 bits.
*/


#include <iostream>
using namespace std;

int main() {

	// make an array
	int fib[60];
	// first two terms are given
	fib[0] = 0;
	fib[1] = 1;
	cout << fib[0] << endl;
	cout << fib[1] << endl;
	// and all the following ones can be computed iteratively as

	for (int i = 2; i<60; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
		cout << fib[i] << endl;
	}
	return 0;
}