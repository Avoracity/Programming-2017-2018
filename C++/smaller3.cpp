/*
Author: Michael Alvarez
Course: CSCI-136
Instructor: Genedy Maryash
Assignment: Task A
Which number is smaller out of the three?
using if else statements
do not write program written by all options, shorten
by efficient code that eliminates any options with functions
*/


#include <iostream>
using namespace std;

int main() {
	int numb1 = 0;
	int numb2 = 0;
	int numb3 = 0;
	
	cout << "Enter the first number: ";
	cin >> numb1; 
	
	cout << "Enter the second number: ";
	cin >> numb2;
	
	cout << "Enter the third number: ";
	cin >> numb3; 
if (numb1 < numb2){
	if (numb1 < numb3){
	cout << "The smaller of the three is " << numb1;
	}
	else if (numb3 < numb1){
	cout << "The smaller of the three is " << numb3;
	}
    }	 
else if (numb2 < numb1){
	if (numb2 < numb3){
	cout << "The smaller of the three is " << numb2;
	}
	else if (numb3 < numb2){
	cout << "The smaller of the three is " << numb3 << endl;
	}
   }
}


