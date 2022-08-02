#include<iostream>

using namespace std;
int main(){
	char ch;
	cout<<"Enter any character or alphabet: ";
	cin>>ch;
	
	if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){
		cout<<"Alphabet";
	}
	else{
		cout<<"Charecter";
	}
	
	return 0;
}
