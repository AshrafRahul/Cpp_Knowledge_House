#include<iostream>

using namespace std;
int main(){
	int n1,n2,n3;
	cout<<"Enter three numbers: ";
	cin>>n1;
	cin>>n2;
	cin>>n3;
	
	if(n1>n2 && n1>n3){
		cout<<n1<<" is the maximum number";
	}
	else if(n1<n2 && n2>n3){
		cout<<n2<<" is the maximum number";
	}
	else if(n3>n1 && n3>n1){
		cout<<n3<<" is the maximum number";
	}
	else{
		cout<<n1<<", "<<n2<<" & "<<n3<<" are equals";
	}
	
	return 0;
}
