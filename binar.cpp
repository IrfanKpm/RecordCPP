#include <iostream>
using namespace std;

void decTobin(int n){
	int binN[32];
	int i=0;
	while(n>0){
		binN[i] = n % 2;
		n = n/2;
		i++;	
	}
	for(int j=i-1;j>=0;j--){
		cout<<binN[j];
	}	
}

int main(){
	int n;
	cout<<"Enter N : ";
	cin>>n;
	decTobin(n);
	return 0;
}
