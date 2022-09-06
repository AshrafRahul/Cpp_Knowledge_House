//program to enter any number and calculate its square root
#include<iostream>
#include<cmath>

using namespace std;
int main(){
	int n;
	double root;
	cout<<"Enter any number: ";
	cin>>n;
	
	root = sqrt(n);
	
	cout<<"The value is: "<<root;
	
	return 0;
}
