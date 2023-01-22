//code to find largest number from tree numbers

#include <iostream>
using namespace std;

int main(){
  int a,b,c;
  cout<< "Enter Value of A :: ";
  cin >>a;
  cout<< "Enter Value of B :: ";
  cin >>b;
  cout<< "Enter Value of C :: ";
  cin >>c;
  if (a>b){
	 if(a>c){
		cout<<a<<" is largest Number"; 		 
	 }else{
		 cout<<c<<" is largest Number";} 	   
  }else{
	if(b>c){
		cout<<b<<" is largest Number";}
	else{
		cout<<c<<" is largest Number";}
	}
  return 0;
}
