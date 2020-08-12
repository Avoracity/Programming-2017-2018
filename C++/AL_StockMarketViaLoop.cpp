/*
Name: Michael Alvarez
Date: April 27, 2020
Desc: Calculates interest rate
Translated simiarly to compound interest formula; A= P(1+r/n)^nt, or A=P(1+r)^t where n is excluded such that n identifies amount of times the interest is compounded per year.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a; //a for amount of money made declares a datatype that allows to manage decimals
	float p = 326  //p for principle ; i.e the starting amount
	float r = .01; //r for rate, earn 1% each day

	for(int day = 1; day <= 20; day++){
		a = p * pow(1+r, day);  //  where pow() is represented as pow(base, exponent)
		cout << day << " ------- " << a << endl;
	}
}
