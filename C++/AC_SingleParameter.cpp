
/*
Name: Michael Alvarez
Date: April 6, 2020
Desc: returns an integer value provided in the functions, printFuncOne's and printFuncTwo's parameter(s).

*/

#include <iostream>
using namespace std;



//single parameter

void printFunc(int x){
	cout <<"the lucky number is" << x << endl;
}

//multiple parameters. Possible to have a multitude of parameters.

int printFuncTwo(int x, int y){
	int answer = x + y;
	return answer;
}
int main()
{
	printFunc(8093);
	cout << printFuncTwo(29, 32); //provides two integers to use for the function
	return 0;
}




