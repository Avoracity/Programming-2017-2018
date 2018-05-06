/*
Michael Alvarez
Professor: Genedy Maryash
Date: 2/27/18
Lab A
Printing numbers based on textfile
*/

#include <iostream>
using namespace std;
int main() {
    int s;
    int sum = 0;
    while(cin >> s) { // While the reading operation is a success
	sum += s;        
    }
cout << sum << endl;  // print the sum
}
