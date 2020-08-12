/*
Name: Michael Alvarez
Date: April 6, 2020
Desc: If statement revisited. Checks different operations for if-statements.
Extra:
April 22, 2020 program revisited. Included missing void data type function initializer
*/

#include <iostream>
using namespace std;

void numberEval();

void numberEval(){
	int x = 10;
	int y = 3;

	if (x==y){
		cout << " the values of x and y are equal. " << endl;
	}
  else
  {
    cout << " the values of x and y are not equal." << endl;
  }
	if (x>y){
		cout << x << " > " << y << " , thus the value of x is greater than y." << endl;
	}

	if (x!=y){
		cout << "the values of x and y are not equal." << endl;
	}
}

int main()
{
	
  numberEval();


	return 0;
}


