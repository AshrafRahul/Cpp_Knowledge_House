#include<iostream>
#include<cmath>

using namespace std;
int main(){
	
	int int_num;
	float float_num;
	double long_float;
	char ch;
	
	cout<<"Enter any integer number: ";
	cin>>int_num;
	cout<<"Enter any float number: ";
	cin>>float_num;
	cout<<"Enter any double number: ";
	cin>>long_float;
	cout<<"Enter any character value: ";
	cin>>ch;
	
	cout<<endl<<"Size of "<<int_num<<" is: "<<sizeof(int_num)<<" byte"<<endl;
	cout<<endl<<"Size of "<<float_num<<" is: "<<sizeof(float_num)<<" byte"<<endl;
	cout<<endl<<"Size of "<<long_float<<" is: "<<sizeof(long_float)<<" byte"<<endl;
	cout<<endl<<"Size of "<<ch<<" is: "<<sizeof(ch)<<" byte"<<endl;
	
	return 0;
}
