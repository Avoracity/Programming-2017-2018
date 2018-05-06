/*
Author: Michael Alvarez
Course: CSCI-136
Instructor: Genedy Maryash
Assignment: Lab 4G
Date: February 24, 2018
Checkered 3 by 3

*/
#include <iostream>
using namespace std;

int width, height;

int main()
{
	int row, col, width, height;

	cout << "input width: ";
	cin >> width;
	cout << "input height: ";
	cin >> height;
	cout << endl << "Shape:" << endl;

	for (int row = 0; row<height; row++)
	{

		for (int col = 0; col<width; col++)
		{
			if (col % 6<3) {
				if (row % 6<3)
					cout << "*";
				//if column is odd, put space
				else
					cout << " ";

			}
			else {
				if (row % 6 >= 3)
					cout << "*";
				else
					cout << " ";
			}
		}cout << endl;
	}
	return 0;
}