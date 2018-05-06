/*
Michael Alvarez
3Course: CSCI 136
Professor: Genedy Maryash
Assignment: 3B
 Display the min and maximum st
*/

#include<string>//strings
#include<fstream>//file streams
#include <cstdlib>//exit
#include<iostream>//cerr=error output stream
#include<iostream>

using namespace std;
int main () {
  
   double eastSt, eastEl, westSt, westEl, min, max;
   max=0;
   min=999;
   string date;
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
    cerr<<"File cannot be opened for reading."<<endl;
    exit(1);
   }
   string junk; //new string variable
   getline(fin, junk); //read one line from the file
     
    while(fin>>date>> eastSt>>eastEl>>westSt>>westEl){ 
    if(eastSt > max){
      max=eastSt;
     }
    if(eastSt < min) {
      min = eastSt;
    }
   }
    cout<<"Minimum storage in East basin: "<< min <<" billion gallons" <<endl;
    cout<<"Maximum storage in East basin: "<< max <<" billion gallons" <<endl;
    fin.close();    

   return 0;
}