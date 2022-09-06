#include <iostream>

using namespace std;
int main(){
    int cp, sp, profit, loss;
    
    cout << "Enter the cost price: ";
    cin >> cp;
    cout << "Enter the selling price: ";
    cin >> sp;
    
    if (sp > cp){
        cout<<"Profit";
    }
    else if (cp > sp){
        cout<<"Loss";
    }
    else{
        cout<<"No profit nor loss"<<endl;
    }
    return 0;
}
