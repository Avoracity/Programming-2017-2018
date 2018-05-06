//Michael Alvarez
//December 8 2017
//The program where I thought everything I did was right, only to find out iomanip was needed
//how much x amount of money increased in one year
#include <iostream>
 
#include <iomanip>
 
using namespace std;
 
 
int main() {
 
 float e; 
 int num;
 
 cout << "Please enter the starting amount: ";
cin >>e; 
 
 num = 1;
 
float f=2*e;
 
 while (e<f) {
 
  e=e*1.10;
 
  cout<<"Year " << num <<" "<< e << setprecision(2) << fixed<< endl;
