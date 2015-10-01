#include<iostream>
#include<string>
using namespace std;
int main(void){
	int i = 0;
	int j;
	string Str,Str1,Temp;
	cin>>j>>Str1;
    for(;i<j;i++){
    	Str = Temp+Str1+"\n";
    	Temp = Str;
    }
    cout<<Str<<endl;
}
