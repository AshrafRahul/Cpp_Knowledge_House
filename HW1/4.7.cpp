#include<iostream>
using namespace std;
int main(){
	
	float cen, met, km;
	cout<<"Enter centimeter value: ";
	cin>>cen;
	cout<<endl;
	
	met = cen/100;
	km = met/1000;
	cout<<"Value in Meter is: "<<met<<endl;
	cout<<"Value in Kilometer is: "<<km;
	
	return 0;
}
