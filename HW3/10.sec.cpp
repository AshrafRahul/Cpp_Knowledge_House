#include<iostream>
#include<cmath>

using namespace std;
int main(){
	
	float num;
	cout<<"Enter any number: ";
	cin>>num;
	
	cout<<endl<<"sec("<<num<<"): "<<(1/(cos(num)))<<endl;
	
	return 0;
}
