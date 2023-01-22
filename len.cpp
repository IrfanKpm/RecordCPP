#include <iostream>
using namespace std;

int main(){
    char str[1000];
    gets(str);
    int length=0;
    for(int i=0;1000;i++){
	  if (str[i] != '\0'){
		length = length + 1;			
	  }else{
		cout<<"Length is : "<<length;
		return 0;
	   }
     }
}
