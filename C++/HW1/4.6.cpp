#include<iostream>
using namespace std;
int main(){
	
	float rad, diameter, circumference, area;
	
	cout<<"Enter radius value: ";
	cin>>rad;
	cout<<endl;
	
	diameter = 2*rad;
	circumference = 2*3.1416*rad;
	area = 3.1416*rad*rad;
	
	cout<<"Diameter is: "<<diameter<<endl;
	cout<<"Circumference is: "<<circumference<<endl;
	cout<<"Area is: "<<area<<endl;
	
	return 0;
}
