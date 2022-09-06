//program to enter P, T, R and calculate Compound Interest.
#include<iostream>
#include<cmath>

using namespace std;
int main(){
	double P,T,R,CI;
	cout<<endl<<"Enter Initial principal balance: ";
	cin>>P;
	cout<<"Enter Annual interest rate: ";
	cin>>R;
	cout<<"Enter Time(in years): ";
	cin>>T;
	
	CI = (pow((P*(1+R)),T))-P;
	cout<<endl<<"Compund Interest is: "<<CI<<endl;
	
	return 0;
}
