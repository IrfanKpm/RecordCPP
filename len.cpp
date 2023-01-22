#include <iostream>
using namespace std;

int main(){
    char str[1000];
    cout<<"Enter String :: ";
    gets(str);
    int length=0;
    while (str[length] != '\0'){
		length++;
	}
	cout<<"Length of string :: "<<length;
	return 0;
}
