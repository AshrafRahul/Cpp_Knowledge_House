#include<iostream>

using namespace std;
int main(){
	int n1,n2;
	cout<<"Enter two numbers: ";
	cin>>n1;
	cin>>n2;
	
	if(n1>n2){
		cout<<n1<<" is the maximum number";
	}
	else if(n1<n2){
		cout<<n2<<" is the maximum number";
	}
	else{
		cout<<n1<<" & "<<n2<<" are equals";
	}
	
	return 0;
}
