/*
Author: Michael Alvarez
Course: CSCI-136
Instructor: Genedy Maryash
Assignment: Task A
Which number is smaller?
Input two numbers.
*/


#include <iostream>
using namespace std;

int main() {
	int numb1 = 0;
	int numb2 = 0;
	
	cout << "Enter the first number: ";
	cin >> numb1; 
	
	cout << "Enter the second number: ";
	cin >> numb2;
		
	if (numb2 < numb1){
		cout << "The smaller of the two is " << numb2 << endl;
        }		
	else if (numb1 < numb2){
	cout << "The smaller of the two is " << numb1 << endl;
        }	 
}


