/*
Author: Michael Alvarez
Course: CSCI-136
Instructor: Genediy Maryash
Assignment: Lab8A
Takes a piece of codes
unindents them.
WOW!
*/

#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line);

int main ()
{
  string line;
  while (getline(cin,line)){
    cout << removeLeadingSpaces(line) << endl;
    //remove output leading namespace
    //cout
  }
  return 0;
}

string removeLeadingSpaces(string line){
  
  string result = ""; // destroy result
  int j = 0; // line space counter
  

    for (int i = 0; i < line.length(); i++){
      if (!isspace(line[i])){ //if it's not blankspace, break loop 
        j = i; // to check that the line is not spaced.
        break;
        }
    }
        
  for (; j < line.length(); j++){
    result += line[j]; 
  }
  
  return result;
  }


  
