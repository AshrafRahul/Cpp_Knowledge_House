#include<iostream>

using namespace std;
int main(){
	int n, i, dig, rev=0;
	cout<<"Enter any number: ";
	cin>>n;
	
	for(i=n; i>0; ){
		dig = i%10;
		rev = (rev*10)+dig;
		i = i/10;
	}
	cout<<"The reverse number is: "<<rev<<endl;
	
	if(n==rev){
		cout<<"This is a Palindrome number"<<endl;
	}
	else{
		cout<<"This is not a Palindrome number"<<endl;
	}
	
	
	return 0;
}
