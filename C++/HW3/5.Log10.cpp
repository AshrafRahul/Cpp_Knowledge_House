#include<iostream>
#include<cmath>

using namespace std;
int main(){
	
	double num, log_value;
	cout<<"Enter any number: ";
	cin>>num;
	
	log_value = log10(num);
	cout<<endl<<"log10("<<num<<"): "<<log_value<<endl;
	
	return 0;
}
