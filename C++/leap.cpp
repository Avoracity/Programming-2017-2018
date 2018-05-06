/*
Author: Michael Alvarez
Course: CSCI-136
Instructor: Genedy Maryash
Assignment: Task C
Date: Febuary 2, 2018
gregorian modulo
*/


#include <iostream>
using namespace std;

int main() {
	int userInput = 0;
	cout << "Enter year: ";
	cin >> userInput;
	if ((userInput % 4 ) != 0){
	cout << "Common year";
	}
	else if ((userInput % 100 ) != 0){
	 cout << "Leap year";
        }
	else if ((userInput % 400 ) != 0){
	  cout << "Common year";   
	 }
	else
	{
        cout << "Leap year ";
   	}
}

