#include<iostream>

using namespace std;
int main(){
	int n, rem, sum=0;
	cout<<"Enter any number: ";
	cin>>n;
	int i;
	
	for(i=n; i>0; ){
		rem = i%10;
		sum = sum+rem;
		i=i/10;
	}
	cout<<"Sum of the digits: "<<sum<<endl;
	
	
	return 0;
}
