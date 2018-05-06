/*
Name: Michael Alvarez
Professor: Genedy Maryash
Assignment: 3A
February 16,2018
Description:

*/
#include<string>//strings
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iostream>//cerr=error output stream
using namespace std;


int main(){

double eastSt, eastEl, westSt, westEl;

fstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
    }

string junk,date, myDate;        // new string variable
getline(fin, junk); // read one line from the file 
cout <<" Enter date\n";
cin >> myDate;


while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    if (date==myDate){
    cout << date << " " << eastSt << endl;
	}
  }
//fin.close();


 }



