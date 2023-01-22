#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c;
	float root1,root2,d;
	cout<<"Enter the coefficient a, b, c :: ";
	cin>>a>>b>>c;	
	if (a==0){
		cout<<"Not a Quadratic equation";
		return 0;
	}
	d = b*b - 4*a*c;	
	if(d==0){
		root1 = -b/2*a;
		cout<<"Roots are Real and Equal ";
		cout<<"Root is : "<<root1;
	}else if(d>0){
		root1 = -b + sqrt(d)/2*a;
		root2 = -b - sqrt(d)/2*a;
		cout<<"Roots are Real and Unequal ";
		cout<<"Root1 :: "<<root1;
		cout<<"Root2 :: "<<root2;
	}else{
		cout<<"Roots are imaginery";
	}
   return 0;
}
