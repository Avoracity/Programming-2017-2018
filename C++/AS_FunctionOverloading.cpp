/*
Name: Michael Alvarez
Date: May 8, 2020
Desc: function overloading
the idea that you can build more than one function with the same name
c++ seeks the specific data in functions.
proficient at making life simple for user, but a bit lengthy for programmers.
*/

#include <iostream>
using namespace std;

void printNum(int x){
	cout << " integer: " << x << endl;
} //printNum(a) would be able to pass an argument but not printNum(b)

void printNum(float x){
	cout << "float: " << x << endl;
}
int main()
{
	int a = 10;
	float b = 3.2945;

	printNum(a);
	printNum(b);


}