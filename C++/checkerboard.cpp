/*
Author: Michael Alvarez
Course: CSCI-136
Instructor: Genedy Maryash
Assignment: Lab 4B

Checkered Board!!
*/
#include<iostream>
using namespace std;
int main()
{
	int width, height;
	cout << "enter width" << endl;
	cin >> width;
	cout << "enter height" << endl;
	cin >> height;
	//rows
	for (int row = 0; row<height; row++) {
		//cols --
		for (int col = 0; col<width; col++) {
			//if it is not a star, then make a space
			if (row % 2 == 0 && col % 2 == 0) {
				cout << "*";
			}
			else if (row % 2 == 0 && col % 2 != 0) {
				cout << " ";
			}
			if (row % 2 != 0 && col % 2 == 0) {
				cout << " ";
			}
			else if (row % 2 != 0 && col % 2 != 0) {
				cout << "*";
			}
		}
		cout << endl;
	}
	return 0;

}