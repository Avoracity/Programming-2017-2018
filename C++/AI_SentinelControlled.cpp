/*
Name: Michael Alvarez
Date: April 26, 2020
Desc: Sentinel Controlled Program
figures out amount indicated then averages said amount
*/

#include <iostream>
using namespace std;

int main(){
	int age;
	int ageTotal = 0;
	int numOfPpl = 0;

	cout << "Enter first person's age. Press -1 to quit. :" << endl;
	cin >> age;

	while (age != -1){  //while -1 is not inputted, run code such that the age total is incremented by age input
		ageTotal = ageTotal + age;
		numOfPpl++; //add one person whenever user inputs an age
	}

	cout << "Number of people entered: " << numOfPpl << endl;
	cout << "Average age: " << ageTotal / numOfPpl << endl; //divides the total age by number of ppl

	return 0;
}