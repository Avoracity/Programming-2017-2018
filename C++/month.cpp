/*
Author: Michael Alvarez
Course: CSCI-136
Instructor: Genedy Maryash
Assignment: Task D
Date: Febuary 2, 2018
gregorian modulo 
months included
well i'm not sure what else to add
I hate this comment problem
*/


#include <iostream>
using namespace std;

int main() {
	int yearInput = 0;
	int monthInput = 0;

	cout << "Enter year: ";
	cin >> yearInput;
	cout << "Enter month: ";
	cin >> monthInput;
	
	if ((yearInput % 4 ) != 0){
	cout << "Common year" << endl;
	}
	else if ((yearInput % 100 ) != 0){
	 cout << "Leap year" << endl;
        }
	else if ((yearInput % 400 ) != 0){
	  cout << "Common year" << endl;
	 }
	else
	{
        cout << "Leap year " << endl;
   	}	
	
	if (monthInput == 4 || monthInput == 6 || monthInput == 9 ||     	monthInput == 11)
 	{
		cout << "30 days" << endl;
 	}	
	else if (monthInput == 2)
	{
	
		if ((yearInput % 4 ) != 0){
	cout << "28 days" << endl;
	}
	else if ((yearInput % 100 ) != 0){
	 cout << "29 days" << endl;
        }
	else if ((yearInput % 400 ) != 0){
	  cout << "28 days" << endl;
	 }
	else
	{
        cout << "29 days" << endl;
   	}		
	}
	else 
	cout << "31 days" << endl;
}

