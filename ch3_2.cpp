#include<iostream>
using namespace std;
int main()
{
    int value,x;
    cout<<"simple conversion\n";
    cout<<"meter to kilometer\n";
    cout<<"Kilograms to Pounds\n";
    cout<<"pound to kilometer\n";
    cout<<"enter your choice:" ;
    cin>>x;
      cout << "Enter the value to convert: ";
    cin >> value;
    switch (x)
    { 
    case 1:
      cout << value << " Meters is " << value / 1000 << " Kilometers.\n";
        break;
    case 2:
          cout << value << " Kilograms is " << value* 2.20462 << " Pounds.\n";
            break;
    case 3:
         cout << value << " Pounds is " << value / 2.20462 << " Kilograms.\n";
            break;
    
    default:
     cout<<"invalid input";
        break;
    }
}