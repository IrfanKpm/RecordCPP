#include <iostream>
using namespace std;

int main(){
   int sum=0;
   int num;
   int rem;  
   cout<<"Enter Input :: ";
   cin >> num;
   
   while(num>0){
	  rem = num % 10;
	  sum = sum + rem;
	  num = num / 10; 
   }
	cout<<"Sum is "<<sum;	
}
