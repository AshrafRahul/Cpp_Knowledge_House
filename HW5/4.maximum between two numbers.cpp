#include <iostream>
 
using namespace std;
int main(){
   int num1, num2;
 	cout<<"Enter two numbers to find maximum number: ";
    cin>>num1;
    cin>>num2;
 
    switch(num1 > num2)
    {
        case 0: cout<<num2<<" is Maximum number";
            break;
 
         case 1: cout<<num1<<" is Maximum number";
            break;
    }
 
    return 0;
}
