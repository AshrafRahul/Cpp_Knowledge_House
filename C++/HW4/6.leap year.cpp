#include<iostream>

using namespace std;
int main(){
	int yr;
	cout<<"Enter any year: ";
	cin>>yr;
	
	if(yr%400==0){
		cout<<"Year is a leap year";
	}
	else if(yr%4==0 && yr%100!=0){
		cout<<"Year is a leap year";
	}
	else{
		cout<<"Year is not leap year";
	}
	
	return 0;
}
