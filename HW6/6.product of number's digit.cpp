#include<iostream>

using namespace std;
int main(){
	int n, rem, product=1;
	cout<<"Enter any number: ";
	cin>>n;
	int i;
	
	for(i=n; i>0; ){
		rem = i%10;
		product = product*rem;
		i=i/10;
	}
	cout<<"Product of the digits: "<<product<<endl;
	
	
	return 0;
}
