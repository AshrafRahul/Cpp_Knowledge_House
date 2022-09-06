#include<iostream>
using namespace std;
int main(){
	
	float cel, fah;
	cout<<"Enter Celsius temperature: ";
	cin>>cel;
	cout<<endl;
	
	fah = (cel*1.8)+32;
	cout<<"Converted Fahrenheit temperature is: "<<fah<<endl;
	
	return 0;
}
