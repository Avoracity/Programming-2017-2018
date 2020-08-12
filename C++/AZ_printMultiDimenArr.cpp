/*
Name: Michael Alvarez
Date: May 23, 2020
Desc: printing multi dimensional arrays.
*/

#include <iostream>
using namespace std;

int main(){

	int arr[5][2] = {{1,2},{3,4},{5,6},{7,8},{9,10}};

	for (int j=0; j<5; j++)
	{
		for (int k=0; k<2; k++)
			{
				cout << arr[j][k] << " ";
			}
			cout << endl;
	}

  
}
