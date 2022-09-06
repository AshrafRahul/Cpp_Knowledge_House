#include<iostream>

using namespace std;
int main(){
	int s1, s2, s3;
	
	cout<<"Enter Three Sides of a Triangle: ";
	cin>>s1>>s2>>s3;
	
	if(s1==s2 && s2==s3){
  		cout<<"This is an Equilateral Triangle\n";
  	}
  	else if(s1==s2 || s2==s3 || s1==s3){
  		cout<<"This is an Isosceles Triangle\n";
	}
  	else{
  		cout<< "This is a Scalene Triangle\n";
	  }
		
 	return 0;
}
