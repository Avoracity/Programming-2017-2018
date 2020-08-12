/*
Name: Michael Alvarez
Date: May 13, 2020
Desc: Arrays declared with loops. useful for arrays with elements of above 50
*/

#include <iostream>
using namespace std;

int main()
{
	int space[3];

	cout << "Elements  -  Values" << endl;

	for(int x = 0; x < 3; x++){
		cout <<  x << endl;
		space[x] = 11; //sets every element to 11
		cout << x << " ------- " << space[x] << endl; //prints element position --- element value
 	}

}