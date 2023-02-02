#include <iostream>
using namespace std;

int main(){
    int i,x,n;
    cout<<"Enter Number of elements in array : ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cout<<"Enter "<<i<<"th element : ";
        cin>>arr[i];
    }
    cout<<"Enter element to search : ";
    cin>>x;
    for(i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"Element ound at index : "<<i;
            return 0;
        }
    }
    cout<<"Element not fount in array";
    return 0;
}
