#include<iostream>

using namespace std;
int main(){
	int n;
	cout<<"Enter week number(1 to 7): ";
	cin>>n;
	
	if(n==1){
		cout<<"Saturday";
	}
	else if(n==2){
		cout<<"Sunday";
	}
	else if(n==3){
		cout<<"Monday";
	}
	else if(n==4){
		cout<<"Tuesday";
	}
	else if(n==5){
		cout<<"Wednessday";
	}
	else if(n==6){
		cout<<"Thursday";
	}
	else if(n==7){
		cout<<"Friday";
	}
	else{
		cout<<"Enter valid input";
	}
	
	return 0;
}
