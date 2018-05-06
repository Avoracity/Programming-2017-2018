/*
Michael Alvarez
Professor: Genediy Maryash
Date: 04/27/18
Lab 11D
calculate the distance between points
*/

#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();

        // assume that the poem p is not needed at this point
	delete p;

    }
}
