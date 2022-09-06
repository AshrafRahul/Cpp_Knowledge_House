#include<iostream>

using namespace std;
int main(){
	int i;
	cout << "The ASCII Values of all the Characters are: "<<endl;
	
	for(i = 0; i <= 255; i++){
		cout << "The ASCII value of " << (char)i << " = " << i << endl;
	}
		
 	return 0;
}
