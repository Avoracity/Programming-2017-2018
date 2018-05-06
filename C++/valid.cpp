/*
Michael Alvarez
Course: CSCI- 136
Instructor:
Assignment: Lab 2A
*/

using namespace std;
#include <iostream>

int main() {
 
 int numInput = 0;
 int finiteLoop = 1;

 cout << "Enter a number: ";
 cin >> numInput;
while (0 >= numInput || numInput >= 100) {
 
 cout << "Please re-enter: ";
 cin >> numInput;
	
}
if ( 0 < numInput && numInput < 100){
 	int squared = numInput * numInput;
 cout << "number squared is: " << squared << endl;
   
}

/*
 while (finiteLoop < 2) {
     if (0 < numInput && numInput < 100) {
 	int squared = numInput * numInput;
     cout << "number squared is: " << squared << endl;
     break;
     }
     else {
       cout << "please enter number again." << endl;
       break;
	
      }
     
  }
   
*/
}

