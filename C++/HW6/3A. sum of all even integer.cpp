#include<iostream>

using namespace std;
int main(){
	int n, i, sum=0;
	cout<<"Enter the value n: ";
	cin>>n;
	
	for(i=0; i<=n; i=i+2){
		sum = sum+i;
	}
	cout<<"Total sum: "<<sum<<endl;
	
	return 0;
}
