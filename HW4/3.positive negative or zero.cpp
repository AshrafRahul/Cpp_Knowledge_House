#include<iostream>

using namespace std;
int main(){
	int n1;
	cout<<"Enter any number: ";
	cin>>n1;
	
	if(n1>0){
		cout<<"n1 is a positive number";
	}
	else if(n1<0){
		cout<<"n1 is a negative number";
	}
	else{
		cout<<"n1 is Zero";
	}
	
	return 0;
}
