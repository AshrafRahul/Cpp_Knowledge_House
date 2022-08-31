#include<iostream>

using namespace std;
int main(){
	int n,i;
	cout<<"Enter the value n: ";
	cin>>n;
	
	cout<<endl<<"Multipication table of "<<n<<": "<<endl;
	for(i=1; i<=10; i++){
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}	
	
	return 0;
}
