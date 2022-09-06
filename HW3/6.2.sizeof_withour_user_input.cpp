#include<iostream>
#include<cmath>

using namespace std;
int main(){
	
	int int_num=8;
	float float_num=8.054;
	double long_float=9.12485;
	char ch='Z';
	
	cout<<endl<<"Size of "<<int_num<<" is: "<<sizeof(int_num)<<" byte"<<endl;
	cout<<endl<<"Size of "<<float_num<<" is: "<<sizeof(float_num)<<" byte"<<endl;
	cout<<endl<<"Size of "<<long_float<<" is: "<<sizeof(long_float)<<" byte"<<endl;
	cout<<endl<<"Size of "<<ch<<" is: "<<sizeof(ch)<<" byte"<<endl;
	
	return 0;
}
