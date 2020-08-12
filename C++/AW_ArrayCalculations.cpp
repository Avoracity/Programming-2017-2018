/*
Name: Michael Alvarez
Date: May 13, 2020
Desc: Array calculating
*/

#include <iostream>
using namespace std;

int main()
{
	int nums[5] = {10,20,30,40,50};
	int sum = 0;

	for(int x = 0; x < 5; x++){
		sum += nums[x];  //adds the incrementing array value to sum
		cout << sum << endl;
	}

}