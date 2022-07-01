#include<iostream>

using namespace std;
int main(){
	
	int num1=30, num2=20;
	
	num1 = num1-num2;
	num2 = num1+num2;
	num1 = num2-num1;
	
	cout<<"This is num1: "<<num1<<endl;
	cout<<"This is num2: "<<num2;
	
	return 0;
}
