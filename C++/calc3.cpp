/*
Michael Alvarez
Professor: Genedy Maryash
March 6, 2018
Lab 1D
the bloody '^' multiplication program
bloody complier error
bloody error
bloody comment error
*/

#include<iostream>
#include<string>
using namespace std;


int main(){
   
  int result, num;
	int sum =-1;
	char sign;
  cin >> num;
  result = num;
    
  while(cin >> sign){
    if(sign == '+'){	
		  sum=1;
			cin >> num;
      result += num;
		}
		else if(sign == '-'){
		  sum=0;
			cin >> num;
      result -= num;
		}
           
    else if(sign =='^'){
		  if(sum == 1 ){
			  result -= num;
			  result += (num * num);
			}
			
		else if(sum==0){
		  result += num;
			result -= (num * num);
			}
		
		else result = (num * num);
		}
    else{
			sum=-1;
      cout << result << endl;     
      result = num;
			if (sign == ';'){
				cin>>num;
				result = num;
			    }
       	}  
    }
    return 0;
}