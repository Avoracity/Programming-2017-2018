//Michael Alvarez
//November 30 2017
#include <iostream>
using namespace std;


int main()
{
 int num;
 cout << "Enter hour (in 24 hour time): ";
 cin >> num;
 if (num < 12 )
 {
  cout << "Good Morning\n";  
 }
 else if (num >= 12 && num < 17)
  {
   cout << "Good Afternoon\n";
   
  }
 else
  {
   cout << "Good Evening\n";
  }
return 0;
}
