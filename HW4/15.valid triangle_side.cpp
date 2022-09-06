#include<iostream>

using namespace std;
int main(){
	int s1, s2, s3;
	cout<<"Enter Three Sides of a Triangle: ";
	cin>>s1>>s2>>s3;
	
	if( (s1 + s2 > s3) && (s2 + s3 > s1) && (s1 + s3 > s2) ){
  		cout<<"This is a Valid Triangle\n";
  	}
  	else{
  		cout<<"This is an Invalid Triangle\n";
	  }
    
 	return 0;
}
