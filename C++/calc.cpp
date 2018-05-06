/*
Michael Alvarez
Professor: Genedy Maryash
Date: 2/28/18
Lab B
Printing numbers based on textfile
Fill-in line cause error documentation
*/

#include<iostream>
#include<fstream>
using namespace std;

int main(){
  
    int sum, num;
    char evaluate;

    cin >> num;
    sum = num;

    while(cin >>evaluate >> num){
      	if(evaluate == '+'){
         sum += num;
	    	}
        else if(evaluate == '-'){
         sum -= num;
	    	}
    }
    cout<< sum << endl;
    return 0;
}
