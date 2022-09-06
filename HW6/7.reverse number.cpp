#include<iostream>

using namespace std;
int main(){
	int n, i, rem;
	cout<<"Enter any number: ";
	cin>>n;
	
	cout<<endl<<"The reverse number is: ";
	for(i=n; i>0; ){
		rem = i%10;
		cout<<rem;
		i = i/10;
	}
	cout<<endl;
	
	
	return 0;
}
