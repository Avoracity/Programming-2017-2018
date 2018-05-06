//Michael Alvarez
//November 30, 2017
//Another C++ program, demonstrating variables
#include <iostream>
using namespace std;

int main () 
{
  int stars;
  cout << "Enter a number: ";
  cin >> stars;
  string s = "";
  for (int i=0; i < stars; i++){
    s = s + "*";
    cout << s << endl;
  }

  return 0; 
}
