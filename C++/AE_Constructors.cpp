/*
Name: Michael Alvarez
Date: April 14, 2020
Desc: Manipulation of constructors.
Constructors is an object that gets called immediately when made.
reminder that each object has it's own value
*/

#include <iostream>
#include <string>
using namespace std;

class Library{
public:
	Library(string z){ //this is a constructor.
		setName(z);
	}
/*Constructors do not have a return type. The constructor is the exact name as class name.
Constructors is mainly used to give variables initial values.
*/
	void setName(string x) {
		name = x;
	}
	string getName() {
		return name;
	}
private: 
	string name; //most variables are initialized in private datatype.
}


int main()
{
	Library lo("the book"); //this plugs in a string for z
	cout << lo.getName(); 
	return 0;
}