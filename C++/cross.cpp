/*
Author: Michael Alvarez
Course: CSCI-136
Instructor: Genedy Maryash
Assignment: Lab 4C
Date: February 24, 2018
Criss Cross Apple saucesteriks
*/
#include<iostream>
using namespace std;
int main()
{
	int size;
	cout << "enter size: ";
	cin >> size;
	cout << endl;
	for (int row = 1; row<=size; row++) {
		for (int col = 1; col<=size; col++) {
		if (row == col || col == (size+1)-row) cout << "*";
		else cout <<" ";
		}
    cout<< endl;
	}
	return 0;
}