/*
Michael Alvarez
Assignment: 3D
February 17,2018
Professor: Genedy Maryash
Description: print highest to lowest
based on user input
*/

#include<string>//strings library
#include<fstream>//file streams
#include <cstdlib>//exit
#include<iostream>//cerr=error output stream

using namespace std;
int main (){

		//create variables taken from tsv
    double eastSt, eastEl, westSt, westEl, min;
    string max;
    string date, startDate, endDate;
    //open tsv
    ifstream fin("Current_Reservoir_Levels.tsv");
    //validate file
    if (fin.fail()) {
		  cerr<<"File cannot be opened for reading."<<endl;
		  exit(1);
   	}
    
    //take inputs for dates
    cout<<"Please enter starting date" <<endl;
    cin>> startDate;
    cout<<"Please enter end date" <<endl;
    cin>> endDate;
    //storage arrays
    string dates[1000];
    double elev[1000];
    //counter for amount of stored values
    int counter = 0;
   
   
   string junk; //new string variable
   getline(fin, junk); //read one line from the file
     
     //take 5 values from tsv
    while(fin>>date>> eastSt>>eastEl>>westSt>>westEl){
    //if the date is earlier than the start or later then the end, ignore the value and keep going
    	if (date < startDate || date > endDate)
    		continue;
    //else, increase amount of stored values
      else{
     		dates[counter] = date;
     		elev[counter] = westEl;
     		counter++;
    	}
    }	
		//from the last value, to 0, go backwards
		for (int i = counter-1; i >= 0; i--)
		//print out the date stored, and the elevation stored
			cout << dates[i] << " " << elev[i] << " ft" << endl;

    fin.close();    
return 0;
}