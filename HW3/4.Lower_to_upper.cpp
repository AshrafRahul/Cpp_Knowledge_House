#include<iostream>
#include<cmath>

using namespace std;
int main(){
	char ch, converted;
	cout<<"Enter any character value: ";
	cin>>ch;
	
	converted = toupper(ch);
	cout<<endl<<"toupper("<<ch<<") : "<<converted<<endl;
	
	return 0;
}
