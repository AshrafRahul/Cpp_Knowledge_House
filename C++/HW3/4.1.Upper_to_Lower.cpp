#include<iostream>
#include<cmath>

using namespace std;
int main(){
	char ch, converted;
	cout<<"Enter any character value: ";
	cin>>ch;
	
	converted = tolower(ch);
	cout<<endl<<"tolower("<<ch<<") : "<<converted<<endl;
	
	return 0;
}
