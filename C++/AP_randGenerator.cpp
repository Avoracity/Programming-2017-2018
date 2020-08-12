/*
Name: Michael Alvarez
Date: May 6, 2020
Desc: manages random numbers through the cpp library
*/


#include <iostream>
#include <cstdlib>           //contains the function rand()
#include <ctime> //contains the function for time()
using namespace std;

int main()
{
	//srand();  can change algorithm by seeding the random generator
	srand(time(0)); //time changes according to seconds
	for (int x =1; x <25; x++){
		cout<< 1+(rand()%6) << endl; //represents 1-6, rand() is not truly random however.

	}

}