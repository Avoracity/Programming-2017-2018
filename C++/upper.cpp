/*
Author: Michael Alvarez
Course: CSCI-136
Instructor: Genedy Maryash
Assignment: Lab 4E

Make an upper triangle!
opposite ends of the right triangle previously.
*/



#include<iostream>
using namespace std;

int main()
{
    int length;

    cout<<"input length of side: ";
    cin>>length;
    cout<<endl;
    //reductions
    for  (int row=length; row>0; row--)
    {   
    for (int col=0; col<=length-row; col++){ 
        cout << " ";
        }
       for(int col=1; col<=row; col++){
        cout<<"*";
        }
        cout<<endl;
       }
  
  return 0;
}
