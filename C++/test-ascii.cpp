/*
Author: Michael Alvarez
Course: CSCI-136
Instructor: Genedy Maryash
Assignment: Lab7A

This program takes input
and outputs the ASCII of input
*/

#include <iostream>
using namespace std;

int main() {
  string s;
	char c;
	cout << "Input: ";
  getline(cin, s);
  
  for ( int t = 0 ; t < s.length(); t++)
  {
         cout << s[t] << " " << (int)s[t] << endl;
  }
}

//s[t] is the index of the character, (int)s[t] converts into ASCII


