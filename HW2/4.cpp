//program to calculate area of an equilateral triangle
#include<iostream>
#include<cmath>

using namespace std;
int main(){
	double a, area;
	cout<<endl<<"Enter the length of the equilateral triangle: ";
	cin>>a;
	
	area = ((sqrt(3))/4)*pow(a,2);
	cout<<endl<<"Area of the equilateral triangle: "<<area<<endl;
	
	return 0;
}
