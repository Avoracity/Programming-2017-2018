/*
Name: Michael Alvarez
Date: May 23, 2020
Desc: multi dimensional arrays. Inserting rows and columns
*/

#include <iostream>
using namespace std;

int main(){
	int multiarr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}} //[3] indicates row and number of elements
	//[4] indicates column and number of values in element

	/* output:   1,2,3,4
				 5,6,7,8
				 9,10,11,12
	*/

	cout << multiarr[1][0]  // would print out the value in the 2nd row, 1st column. thus, 5

}