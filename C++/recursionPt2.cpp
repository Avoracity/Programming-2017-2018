
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

int main() {
	   int x = sumRange(1, 3);
    cout << x << endl;   // 6
    
    int y = sumRange(-2, 10);
    cout << y << endl;   // 52

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


