#include<iostream>

using namespace std;
int main(){
	int n;
	cout<<"Enter any number: ";
	cin>>n;
	
	if(n%5==0 && n%11==0){
		cout<<"The number is divisible by 5 & 11";
	}
	else{
		cout<<"The number is not divisible by 5 & 11";
	}
	
	return 0;
}
