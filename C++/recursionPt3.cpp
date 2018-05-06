
/*
Author: Michael Alvarez
Course: CSCI-136
Instructor: Genediy Maryash
Assignment: Lab 12A

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

// to count from n down to 1:
#include <iostream>
using namespace std; 

void printRange(int left, int right);
int sumRange(int left, int right);
int sumArray(int *arr, int size);
int sumArrayInRange(int *arr, int left, int right);

int main() {
	int size = 10;
    int *arr = new int [size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    int sum = sumArray(arr, size); // Add all elements
    cout << "Sum is " << sum << endl;  // Sum is 43
    
    sum = sumArray(arr, 5); // Add up first five elements
    cout << "Sum is " << sum << endl;  // Sum is 34

    delete[] arr;         // deallocate it
}

void printRange(int left, int right){

		if (left <=  right) {
			
			cout << left << " ";
			printRange(left + 1, right);

		}
		else{
			return;
	}	
}


int sumRange(int left, int right){

	if ( left <= right) {
		return  left + sumRange(left+1, right);
	}
	else{
	  return 0;
	}

}

int sumArray(int *arr, int size){
	
	return sumArrayInRange(arr, 0, size-1);
}

int sumArrayInRange(int *arr, int left, int right){
	int sum = 0;
	if (left <= right){
		sum = arr[left] + sumArrayInRange(arr, left+1,right);
	}

	return sum;
}



