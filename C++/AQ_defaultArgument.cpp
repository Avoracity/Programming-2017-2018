/*
Name: Michael Alvarez
Date: May 8, 2020
Desc: default arguments
*/

#include <iostream>
using namespace std;

int volume(int L=1, int w=1, int h=1);  //function prototype 
/* 
three arguments are in the parameter.  default arguments are just set values in the variables,
assuming the user has not inputted any value.
if user inputs volume(5), the computer will assume the user meant l=5, and use the default argument
for the last two values and so forth.
default argument only goes into the function prototype.
*/

int main()
{
	cout << volume(4,5,5); //assume the user input values of 4 ,5, 5
}


int volume(int L, int w, int h){
	return L*w*h
}