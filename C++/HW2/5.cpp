//program to enter marks of five subjects and calculate total, average and percentage.
#include<iostream>

using namespace std;
int main(){
	float m1,m2,m3,m4,m5,total, avg, per;
	cout<<"Enter number1: ";
	cin>>m1;
	cout<<"Enter number2: ";
	cin>>m2;
	cout<<"Enter number3: ";
	cin>>m3;
	cout<<"Enter number4: ";
	cin>>m4;
	cout<<"Enter number5: ";
	cin>>m5;
	
	total = m1+m2+m3+m4+m5;
	avg = total/5;
	per = (total*100)/500;
	
	cout<<endl<<"Total marks: "<<total<<endl;
	cout<<"Average marks: "<<avg<<endl;
	cout<<"Percentage of total marks: "<<per<<endl;
	
	
	return 0;
}
