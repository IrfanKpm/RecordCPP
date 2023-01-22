#include <iostream>
using namespace std;

int main(){
	int num;
	int out = 0;
	int rem;
	int copy;
	
	cout<<"Enter input N :: ";
	cin >> num;
	copy = num;
	while(num>0){
		rem = num%10;
		out = out*10 + rem;
		num = num/10;	
	}
	if (out==copy){
		cout<<"Number is Palidrome";
	}else{
        cout<<"Number is Not Palidrome";
	}
	return 0;
}
