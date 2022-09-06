#include<iostream>
using namespace std;
int main(){
	
	float mark1, mark2, mark3, mark4, mark5;
	cout<<"Enter mark1: ";
	cin>>mark1;
	cout<<"Enter mark2: ";
	cin>>mark2;
	cout<<"Enter mark3: ";
	cin>>mark3;
	cout<<"Enter mark4: ";
	cin>>mark4;
	cout<<"Enter mark5: ";
	cin>>mark5;
	cout<<endl;
	
	float avg = (mark1+mark2+mark3+mark4+mark5)/5;
	float per = ((mark1+mark2+mark3+mark4+mark5)*100)/500;
	
	cout<<"Average: "<<avg<<endl;
	cout<<"Percentage: "<<per<<endl;
	
	return 0;
}
