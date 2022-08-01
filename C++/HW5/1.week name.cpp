#include<iostream>

using namespace std;
int main(){
	int week_num;
	cout<<"Enter any number(1 to 7): ";
	cin>>week_num;
	
	switch(week_num){
		case 1:{
			cout<<"Saturday\n";
			break;
		}
		case 2:{
			cout<<"Sunday\n";
			break;
		}
		case 3:{
			cout<<"Monday\n";
			break;
		}
		case 4:{
			cout<<"Tuesday\n";
			break;
		}
		case 5:{
			cout<<"Wednessday\n";
			break;
		}
		case 6:{
			cout<<"Thursday\n";
			break;
		}
		case 7:{
			cout<<"Friday\n";
			break;
		}
		default:{
			cout<<"Enter valid input\n";
			break;
		}
	}
	
	
	return 0;
}
