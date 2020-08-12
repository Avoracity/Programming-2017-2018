/*
Name: Michael Alvarez
Date: May 3, 2020
Desc: logical analysis on do and while statements
do loops are used for running a piece of programming at least ONE time.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x = 1;

	do{
		cout << x << endl;
		x++;
	}while();

	return 0;
}

/*

sample A:       while statement only runs when not on edge
--
while(not edge) {
	run();
}

sample B:  do statement initiates the code and after code is initialized, checks if not on edge.
may lead to bugs as the checking condition is post action.
--
do{
	run();
}while(not edge)


*/