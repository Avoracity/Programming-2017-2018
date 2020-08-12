/*
Name: Michael Alvarez
Date: May 24, 2020
Desc: outputs the size of the variable's byte
useful for knowing how many elements in an array.
*/

#include <iostream>
using namespace std;

int main(){

	int c;
	double d;
	double arr[5];

	cout << sizeof(c) << endl; //4 bytes
	cout << sizeof(d) <<endl;  // 8 bytes
	cout << sizeof(arr) << endl; // 5 x 8 = 40 bytes
	cout << sizeof(arr) / siezeof(arr[0]) << endl; // 80 divided by 8 gives 10 elements.




}