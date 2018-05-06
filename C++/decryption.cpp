/*
Michael Alvarez
Professor: Genediy Maryash
Lab 7D
3/17/18
dencrypt
vigenere
cipher
nothing will work igiveupgradescope.com
*/

#include<iostream> 
#include<cctype>
#include<sstream>
#include<string>
using namespace std;

string getAsciiLine(string s);
char shiftChar(char c, int rshift);
char deshiftChar(char c, int rshift);
string encryptCaesar(string plaintext, int rshift);
string decryptCaesar(string plaintext, int rshift);
string encryptVigenere(string plaintext, string keyword);
string decryptVigenere(string plaintext, string keyword);

int main(){
	string message, keyword, newmessage;
	int caesarkey;
	cout<<"\nEnter Plaintext :";
	getline(cin,message);

	cout << "= Caesar =" << endl << "Enter Shift\t:";
	cin >> caesarkey;

	newmessage = encryptCaesar(message, caesarkey);
	cout << "Ciphertext\t:" << newmessage << endl;
	cout << "Decrypted\t:" << decryptCaesar(newmessage, caesarkey) << endl;

	cout << "\n= Vigenere =" << endl << "Enter Keyword\t:";
	cin>>keyword;
	newmessage = encryptVigenere(message, keyword);

 	cout << "Ciphertext\t:" << newmessage << endl;
	cout << "Decrypted\t:" << decryptVigenere(newmessage, keyword) << endl;
   	return 0;
}



char deshiftChar(char c, int rshift){
     int ascii;

	//if the character is between A and Z
     	if((int)c >= 65 && (int)c <= 90) {
	//subtract the shift from the character
        	ascii=(int)c - rshift;
		//if the character is below A, add 26 to return it to the alphabet
     		if (ascii < 65)
			ascii = ascii + 26;
     	}
        //if the character is between a and z
     	else  if((int) c >=97 && (int)c<=122) {
		//subtract the shift from the character
		ascii=(int)c-rshift;
		//if the character is below a, add 26 to return it to the alphabet
        	if (ascii < 97)
			ascii=ascii + 26;
    	}
	//if the character is not on the alphabet, do not encrypt
     	else
		return c;
     	//If not either uppercase or lowercase, don't have to change the character. 

     	return (char)ascii;
}

char shiftChar(char c, int rshift){
     int ascii;
     if((int)c >=65&&(int)c<=90) {
        ascii=(int)c + rshift;
     	if (ascii >90)
		ascii=ascii-26;
   
     }
         
     else  if(c >=97 && c<=122) {
           ascii=(int)c + rshift;
           if (ascii > 122)
		ascii=ascii-26;
                
     }
     else return c;
     //If not either uppercase or lowercase, don't have to change the character. 
     return (char)ascii;
}



string decryptCaesar(string plaintext, int rshift){
//This will show how the encryption is implemented by encrypting the use of Caesar cipher
    	string result="";
   	for(unsigned int i=0; i<plaintext.length(); i++){
        	result = result + deshiftChar(plaintext[i], rshift);	
    	}
    	return result;
}

string encryptCaesar(string plaintext, int rshift){
//This will show how the encryption is implemented by encrypting the use of Caesar cipher
    	string result="";
   	for(unsigned int i=0; i<plaintext.length(); i++){
        	result= result + shiftChar(plaintext[i], rshift);	
    	}
    	return result;
}



//This function will take both strings and encrypt into the other.
string encryptVigenere(string plaintext, string keyword){
	int k=0;
	int shift;
	char check;
	string result="";
	for (unsigned int i=0; i < plaintext.length(); i++){
		shift = keyword[k] - int('a');
		check=shiftChar(plaintext[i], shift);
		result=result+check;
		if (int(plaintext[i]) >= 65 && int(plaintext[i]) <= 90 ) k++;
		else if(int(plaintext[i]) >= 97 && int(plaintext[i]) <= 122 ) k++;

		if(k==keyword.length())
			k=0;	
	}
	return result;
}

string decryptVigenere(string plaintext, string keyword){
	int k=0;
	int shift;
	char check;
	//create empty string
	string result="";
	//for every letter in plaintext
	for (unsigned int i=0; i < plaintext.length(); i++){
		//find distance of letter from 'a'
		shift = keyword[k] - int('a');
		check=deshiftChar(plaintext[i], shift);
		result=result+check;
		if (int(plaintext[i]) >= 65 && int(plaintext[i]) <= 90 ) k++;
		else if(int(plaintext[i]) >= 97 && int(plaintext[i]) <= 122 ) k++;

		if(k==keyword.length())
			k=0;	
	}
	return result;
}