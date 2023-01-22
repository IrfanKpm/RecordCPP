#include <iostream>
using namespace std;

int main(){
	int n,i,arr[20],sum=0;
	cout<<"Enter the size of array :: ";
	cin>>n;
	for(i=0;i<n;i++){
		cin >> arr[i];	
	}
	for(i=0;i<n;i++){
		sum = sum + arr[i];
	}
	cout<<"sum of array elements : "<<sum;
	return 0;
}
