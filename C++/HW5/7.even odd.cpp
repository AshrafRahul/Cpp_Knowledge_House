#include <iostream>

using namespace std;
int main(){ 
    int num;
 
    cout<<"Enter any number to check even or odd: ";
    cin>>num;
 
     switch(num % 2){
        case 0: cout<<num<<" is an even number\n";
                break;
                
        case 1: cout<<num<<" is an odd number\n";
                break;
    }
    
    return 0;
}
