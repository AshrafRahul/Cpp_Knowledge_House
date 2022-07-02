#include<iostream>
#include<cmath>

using namespace std;
int main(){
	int num, expo, result;
	cout<<"Enter any number: ";
	cin>>num;
	cout<<"Enter expo number: ";
	cin>>expo;
	
	result = pow(num,expo);
	cout<<endl<<num<<"^"<<expo<<" = "<<result<<endl;
	
	return 0;
}
