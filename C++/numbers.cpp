/*
Name: Michael Alvarez
Professor: Genedy Maryash
Date: March 3, 2018
Assignment 5A
numbers.cpp
divide number
*/

#include <iostream>
using namespace std;

bool  isDivisibleBy(int n, int d); //prototype of function

int main() {
	
	int n, d;
	cout << "Enter number 1: ";
	cin >>n;
	cout << "Enter number 2: ";
	cin >> d;

	isDivisibleBy(n, d);

}

	bool isDivisibleBy(int n, int d) {	
		if(d == 0){
			cout<<"No"<<endl;
			return false;		
		}			
		else if (n%d==0){
			cout <<"Yes"<<endl;
			return true;		
		}
		else{
			cout <<"No"<<endl;
			return false;
		}
		
	}

