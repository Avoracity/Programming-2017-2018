/*
Michael Alvarez
Professor Genediy Maryash
Date 3/23/18
Lab 8B
fix indent issues
whatsup
*/
#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
string removeLeadingSpaces(string line);
int countChar(string line, char c);
int main()
{
	string line;
	int tapCount = 0;
	while (getline(cin, line)) {

		line = removeLeadingSpaces(line); //remove indents



		if (line[0] == '}') {
			for (int i = 0; i < tapCount - 1; i++) { //for the total of tapcounts
				cout << "\t";
			}
		}
		else {
			for (int i = 0; i < tapCount; i++)
				cout << "\t";
		}

		tapCount -= countChar(line, '}'); //subtract num for every }
		cout << line << endl;
		tapCount += countChar(line, '{'); //add num for every {
	}
	return 0;
}
int countChar(string line, char c) {
	int num = 0;
	for (int i = 0; i < line.length(); i++) {
		if (c == line[i]) {
			num += 1;
		}
	}


	return num;
}
string removeLeadingSpaces(string line) {

	string result = ""; // destroy result
	int j = 0; // line space counter

	for (int i = 0; i < line.length(); i++) {
		if (!isspace(line[i])) { //if it's not blankspace, break loop 
			j = i; // to check that the line is not spaced.
			break;
		}
	}

	for (; j < line.length(); j++) {
		result += line[j];

	}

	return result;
}
