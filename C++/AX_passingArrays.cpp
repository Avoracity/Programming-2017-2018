/*
Name: Michael Alvarez
Date: May 13, 2020
Desc: passing arrays into functions
*/

#include <iostream>
using namespace std;

void printArray(int Arr[], int sizeArr) ; //prototype  , identifies line of code as a function.

int main(){
	int Arr[6] = {10,21,53,67,79,426};

	printArray(Arr, 6);  //only need to write the array's name
}

void printArray(int Arr[], int sizeArr){
	for (int x=0; x < sizeArr; x++){
		cout << Arr[x] << endl;
	}
}  //pass an array in parameter, int arr[]. and size.
