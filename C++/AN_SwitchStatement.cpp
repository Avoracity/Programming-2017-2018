/*
Name: Michael Alvarez
Date: May 5, 2020
Desc: Switch Statements. Used when you want to check conditions by using only ONE variable.
more compact than if statements
*/

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
	int age = 18;
	switch(age){
		case 16:
			cout << "sixteen years" << endl;
			break;  //terminates c
		case 18:
			cout << "eighteen years" << endl;
			break;
		default:        //if none of the cases are true,run default.
			cout << "importance of age was not indicated." << endl;
	}

}