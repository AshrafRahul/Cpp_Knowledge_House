//program to enter P, T, R and calculate Simple Interest
#include<iostream>

using namespace std;
int main(){
	double P,T,R,SI;
	cout<<endl<<"Enter Initial principal balance: ";
	cin>>P;
	cout<<"Enter Annual interest rate: ";
	cin>>R;
	cout<<"Enter Time(in years): ";
	cin>>T;
	
	SI = (P*T*R)/100;
	cout<<endl<<"Simple interest is: "<<SI<<endl;
	
	return 0;
}
