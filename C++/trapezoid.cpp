/*
Author: Michael Alvarez
Course: CSCI-136
Instructor: Genedy Maryash
Assignment: Lab 4F

Make an upside down trapezoid
:D :D :D :D :D HUZZAH ITS DONE
*/
#include <iostream>
using namespace std;

int main() 
{
  int height, width;
 cout << "enter width";
 cin >> width;
 cout << "Input height";
 cin >> height;
cout <<"Shape:"<<endl;


//if (width < 2 * height - 1)]
// {
// 
// }
 for (int row = 0;  row < height; row++){
    if (width < 2 * height - 1)
     {
      cout<< "Impossible shape!" << endl;
      break;
       
     }
   for (int col = 0;  col < width; col++){
     
     if (col < row || col > width - row -1)
     {
       cout << " ";
     }
     else 
     {
      cout << "*";  
     }
    

     }
      
     
       
   cout << endl;
 }
 
 return 0;
}