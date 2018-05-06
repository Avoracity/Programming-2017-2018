/*
Michael Alvarez
Professor: Genediy Maryash
Lab 7C
3/17/18
encrypt
vigenere
cipher
nothing will work igiveupgradescope.com
*/#include<iostream> 
#include<cctype>
#include<sstream>
#include<string>
using namespace std;

string getAsciiLine(string s);
char shiftChar(char c, int rshift);
string encryptCaesar(string plaintext, int rshift);
string encryptVigenere(string plaintext, string keyword);

int main()
{
	string message;
	cout << "Enter message: ";
	getline(cin, message);
	cout << "Enter keyword: ";
	string newmessage;
	string keyword;

	cin >> keyword;
	cout << encryptVigenere(message, keyword) << endl;



	//cout<<newmessage<<endl;
	return 0;

}



char shiftChar(char c, int rshift) {


	int ascii;

	if ((int)c >= 65 && (int)c <= 90) {
		ascii = (int)c + rshift;
		if (ascii >90) ascii = ascii - 26;

	}

	else  if (c >= 97 && c <= 122) {
		ascii = (int)c + rshift;
		if (ascii > 122) ascii = ascii - 26;



	}
	else return c;
	//If not either uppercase or lowercase, don't have to change the character. 
	return (char)ascii;
}

string encryptCaesar(string plaintext, int rshift) {
	//This will show how the encryption is implemented by encrypting the use of Caesar cipher
	string result = "";
	for (unsigned int i = 0; i<plaintext.length(); i++) {
		result = result + shiftChar(plaintext[i], rshift);




	}




	return result;
}
//This function will take both strings and encrypt into the other.
string encryptVigenere(string plaintext, string keyword) {
	int k = 0;
	int shift;
	char check;
	string result = "";
	for (unsigned int i = 0; i < plaintext.length(); i++) {
		shift = keyword[k] - int('a');
		check = shiftChar(plaintext[i], shift);
		result = result + check;
		if (int(plaintext[i]) >= 65 && int(plaintext[i]) <= 90) k++;
		else if (int(plaintext[i]) >= 97 && int(plaintext[i]) <= 122) k++;

		if (k == keyword.length())
			k = 0;
	}
	return result;
}