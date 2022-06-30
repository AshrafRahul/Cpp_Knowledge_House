#include<iostream>
using namespace std;
int main(){
	
	float height, base;
	cout<<"Enter height of the triangle: ";
	cin>>height;
	cout<<"Enter base of the triangle: ";
	cin>>base;
	cout<<endl;
	
	float area = 0.5*height*base;
	cout<<"Area of the triangle is: "<<area<<endl;
	
	return 0;
}
