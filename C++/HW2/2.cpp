// program to enter two angles of a triangle and find the third angle.
#include<iostream>

using namespace std;
int main(){
	float ang1, ang2, ang3;
	cout<<"Enter angle1: ";
	cin>>ang1;
	cout<<"Enter angle2: ";
	cin>>ang2;
	
	ang3 = 180 - (ang1 + ang2);
	cout<<endl<<"Third angle is: "<<ang3<<endl;
	
	return 0;
}
