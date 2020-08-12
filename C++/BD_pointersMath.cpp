/*
Name: Michael Alvarez
Date: May 24, 2020
Desc:  pointers with math ; adding integers with pointers
if # of bytes differs, it's due to the way the computer handles memory bytes.
old computers typically store 2~4 , newer  6~8...
*/

#include <iostream>
using namespace std;

int main(){
	int arr[4];
	int *pointingOne = &arr[0];  //pointer One is assigned the address of the first element.
	int *pointingTwo = &arr[1];  //pointer Two is assigned the address of the second element.
	int *pointingThree = &arr[2];  //pointer Three is assigned the address of the third element.


	cout << "pointing memory address : " << arr[0] << endl;
	cout << "pointing memory address : " << arr[1] << endl;
	cout << "pointing memory address : " << arr[2] << endl;

	pointingOne += 2;
	cout << "pointing One is now currently : " << arr[0] << endl;




}