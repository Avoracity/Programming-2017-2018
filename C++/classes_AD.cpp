/*
Name: Michael Alvarez
Date: April 6, 2020
Desc: manipulation of classes
Extra: Classes are used for classifying a group of functions with their functionality.
i.e functions for temperature goes inside the class temp
*/

#include <iostream>
#include <string>
using namespace std;

class temp{
	public:	 //any data after this can be used outside of class ; known as an access-specifier
		void tempPrint (){
			cout<< "The temperature is indeterminate at the moment." << endl;
		//make variables private to avoid client manipulation.
		}
};
class nonManipulation{
public:
	void setName(string x) { //setName function assigns name, x.
		name = x; //by setting x into name, name is a new variable that will remain in the class if specified private.
	}
	string getName(){ //function datatype is string b/c returning a string. Return name.
		return name;
	}
private:
	string name; //you set name.

};
 //classes groups functions for a particular feature i.e folder to file

int main(){
	//main function needs an object that tells what the class is working with.
	temp tempObject; //this is the object.
	tempObject.tempPrint //by using point operator, you can access the function tempPrint from the class temp.

	nonManipulation nmo;
	nmo.setName("manipulation null") //set a text through setName function
	cout << nmo.getName(); //print out the value by using the function getName
	return 0;
}