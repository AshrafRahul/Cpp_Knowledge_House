#include <iostream>

using namespace std;
int main(){
   int n,first,last;
    cout << "Find the first and last digit of a number: "<<endl;
    cout << " Input any number: ";
    cin >> n;
    
    first = n;
	last=n % 10;
	
	for(first=n;first>=10;first=first/10);
    cout<<endl<<"The first digit of "<<n<<" is: "<<first<<endl;
    cout<<"The last digit of "<<n<<" is: "<<last<<endl;
}
