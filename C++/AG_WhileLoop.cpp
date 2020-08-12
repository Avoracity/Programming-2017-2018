/*
Name: Michael Alvarez
Date: April 24, 2020
Desc: While Loop
takes code until case is false

*/

#include <iostream>
using namespace std;

void ClockCounter();

void ClockCounter(){
	int counter = 0;
	while (counter <= 5){
		cout << "the number is " << counter << endl;
		counter = counter + 2;
	}

}

int main()
{
	ClockCounter();
	
	return 0;
}