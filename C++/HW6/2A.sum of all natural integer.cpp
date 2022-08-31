#include<iostream>

using namespace std;
int main(){
	int n, i, sum=0;
	cout<<"Enter how many integer numbers: ";
	cin>>n;
	
	for(i=1; i<=n; i++){
		sum = sum+i;
	}
	cout<<"Total sum: "<<sum<<endl;
	
	return 0;
}
