#include<iostream>
using namespace std;
int main(){
	
	int length, width, perimeter;
	
	cout<<"Enter length: ";
	cin>>length;
	cout<<"Enter width: ";
	cin>>width;
	cout<<endl;
	
	perimeter = 2*(length+width);
	cout<<"Perimeter is: "<<perimeter;
	
	return 0;
}
