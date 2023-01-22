#include <iostream>
using namespace std;

int main(){
	int arr[20];
	int i,n,x;
	
	cout<<"How many elements :: ";
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter Elemet to search :: ";
	cin >> x;
	
	for(i=0;i<n;i++){
	  if(arr[i]==x){
		 cout<<"Element Found at Index > "<<i;
		 break;
	  }
	}
		
}
