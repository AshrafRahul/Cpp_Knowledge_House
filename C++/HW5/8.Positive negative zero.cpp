#include<iostream>

using namespace std;
int main(){
  double number;
  cout << "Enter a Number : ";
  cin >> number;
  
  switch(number > 0)
  {
      case 1 :
         cout << "Positive" << endl;
         break;
      
	  case 0 :
        switch(number < 0)
        {
            case 1 :
               cout << "Negative" << endl;
               break;
            case 0 :
               cout << "Zero" << endl;
               break;
        }
        break;
  }
  
  return 0;
}
