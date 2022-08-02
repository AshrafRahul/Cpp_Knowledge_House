#include<iostream>

using namespace std;
int main(){
	float ang1,ang2,ang3;
	cout<<"Enter three angle of a triangle: ";
	cin>>ang1;
	cin>>ang2;
	cin>>ang3;
	
	if((ang1+ang2+ang3)==180){
		cout<<"Triangle is valid";
	}
	else{
		cout<<"The triangle is not valid";
	}
	
	return 0;
}
