#include<iostream>
#include<cmath>

using namespace std;
int main(){
	
	double base, expo, power;
	
	cout<<"Enter any positive number: ";
	cin>>base;
	cout<<"This is base number: "<<base<<endl<<endl;
	
	cout<<"Enter any positive number: ";
	cin>>expo;
	cout<<"This is expo number: "<<expo<<endl<<endl;
	
	power = pow(base,expo);
	
	cout<<"This is final result base^expo: "<<power;
	
}
