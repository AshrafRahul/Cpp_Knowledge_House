#include<iostream>

using namespace std;
int main(){
    int num1, num2;
    char op;

    cout<<"Enter any operator (+ , - * /) : ";
    cin>>op;

    cout<<"Enter two numbers : ";
    cin>>num1;
    cin>>num2;

    switch(op)
    {
    case '+' :
    {
        cout<<num1<<" + "<<num2<<" = "<<num1+num2;
        break;
    }
    case '-' :
    {
        cout<<num1<<" - "<<num2<<" = "<<num1-num2;
        break;
    }
    case '*' :
    {
        cout<<num1<<" * "<<num2<<" = "<<num1*num2;
        break;
    }
    case '/' :
    {
        cout<<num1<<" / "<<num2<<" = "<<num1/num2;
        break;
    }
    default:
        cout<<"Not a valid operator";
    }


}
