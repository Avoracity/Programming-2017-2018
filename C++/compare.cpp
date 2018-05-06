/*
Michael Alvarez
Assignment: 3C
February 17,2018
Professor: Genedy Maryash
Description: print lowest to highest ft data
based on user input
*/

#include<string>//strings library
#include<fstream>//file streams
#include <cstdlib>//exit
#include<iostream>//error output stream
#include<iostream>

using namespace std;
int main (){
    double eastSt, eastEl, westSt, westEl, min;
    string max;
    string date, startDate, endDate;
    ifstream fin("Current_Reservoir_Levels.tsv");
    cout<<"Please enter starting date" <<endl;
    cin>> startDate;
    cout<<"Please enter ending date" <<endl;
    cin>> endDate;
    if (fin.fail()) {
		  cerr<<"File cannot be opened for reading."<<endl;
		  exit(1);
   }
   string junk; //new string variable
   getline(fin, junk); //read one line from the file
     
    while(fin>>date>> eastSt>>eastEl>>westSt>>westEl){
    	if (date < startDate || date > endDate)
    		continue;
     
		  if(eastEl < westEl)
		  	max="West";
		  else if(westEl < eastEl)
		    max ="East";
		  else
		  	max = "Equal";
			 cout<< date << " " << max << endl;
    }	

    fin.close();    
return 0;
}