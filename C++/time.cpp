/*
Author: Michael Alvarez
Course: CSCI-136
Instructor: Genediy Maryash
Assignment: Lab 10A

Enum struct
and e.g.
time difference
*/

using namespace std;
#include <iostream>

struct Time {
    int h;
    int m;
};

int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later); 

int main(){
	int intervalMin, minSinceMidX ,minSinceMidY;
	Time earlier, later;

	cout << "Enter first time:	";
	cin >> earlier.h >> earlier.m;

	cout <<"Enter second time:	";
	cin >> later.h >> later.m;

	//minutesSinceMidnight(Time time);
	intervalMin = minutesUntil(earlier, later); 

	minSinceMidX = minutesSinceMidnight(earlier);
	minSinceMidY = minutesSinceMidnight(later);

	cout << "These moments of time are " << minSinceMidX << " and " << minSinceMidY << " minutes after midnight." << endl;
	cout << "The interval between them is " << intervalMin << " minutes." << endl;
	return 0;
}

int minutesSinceMidnight(Time time){
	Time midnight = {0, 0};         //midnight is a struct of type Time. 0:00     
	int minutes;
	minutes = time.m - midnight.m; // evaluate current time minutes subtracted by midnight minutes
	minutes = minutes + (time.h - midnight.h) * 60;	//evaluate current time hours subtracted by
													// midnight hours multiplied by 60
	return minutes; //return number of minutes from 0 until time
}


int minutesUntil(Time earlier, Time later){ 

	int minutes;
	minutes = later.m - earlier.m; // evaluate current time minutes subtracted by midnight minutes
	minutes = minutes + (later.h - earlier.h) * 60;	//evaluate current time hours subtracted by
													// midnight hours multiplied by 60
	return minutes; //return number of minutes from 0 until time
}

void printTime(Time time) {
    cout << time.h << ":" << time.m;
}



