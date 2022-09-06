#include<iostream>
using namespace std;
int main(){
	
	int day;
	cout<<"Ente days: ";
	cin>>day;
	cout<<endl;
	
	int yr = day/365;
	int yr1 = day%365;
	int week = yr1/7;
	int days = yr1%7;
	
	cout<<"Year: "<<yr<<endl;
	cout<<"Week: "<<week<<endl;
	cout<<"Days: "<<days<<endl;
	
	return 0;
}
