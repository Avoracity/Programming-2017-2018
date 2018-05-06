/*
Michael Alvarez
Professor: Genedy Maryash
March 6, 2018
Lab 5B

calculations upon calculations
they
asked
for
seven
more
lines
so
here
you
go
*/

#include <iostream>
using namespace std;

bool isDivisibleBy(int n, int d);
bool test_isDivisibleBy();

bool isPrime(int n);
bool test_isPrime;

int nextPrime(int n);
bool test_nextPrime;



int countPrimes(int a, int b);
bool test_countPrimes;


bool isTwinPrime(int n);
bool test_isTwinPrime(int n);

int nextTwinPrime(int n);
bool test_isnextTwinPrime;

int main() {
	int n;
	cin >> n;
	cout << nextTwinPrime(n) << endl;
}

bool isDivisibleBy(int n, int d) {
	if (d == 0) {
		cout << "Division_by_Zero!" << std::endl;
		return false;
	}
	return(n%d == 0);
}

bool isPrime(int n) {
	if (n<2) {
		return false;
	}

	for (int i = 2; i<n; i++) {
		if (n%i == 0) {
			return false;
		}
	}
	return true;
}



int countPrimes(int a, int b) {
	int count = 0;

	for (int i = a; i <= b; i++)
	{
		if (isPrime(i)) { count++; }
	}
	return count;
}



int nextPrime(int n) {
	n++;
	while (!isPrime(n)) {
		cout << "Checking: " << n << endl;
		n++;
	}
	return n;
}


bool isTwinPrime(int n) {
	if (isPrime(n)) {
		if (isPrime(n - 2) || isPrime(n + 2))
			return true;
	}
	return false;
}

int nextTwinPrime(int n) {
	int value = nextPrime(n);
	while (!isTwinPrime(value))
		value = nextPrime(value);
	return value;
}


bool test_isDivisibleBy() {

	const int LEN = 3;
	int test_n[LEN] = { 0,1,4 };
	int test_d[LEN] = { 1,0,-2 };
	bool res[LEN] = { true, false, true };
	bool pass = false;
	bool allpass = true;
	for (int i = 0; i<LEN; i++) {
		pass = isDivisibleBy(test_n[i], test_d[i]) == res[i];
		allpass = allpass && pass;
		if (!pass) {
			std::cout << "n:" << test_n[i]
				<< "\td:" << test_d[i]
				<< "|tex[expected:" << res[i] << std::endl;
		}
	}
	return allpass;
}