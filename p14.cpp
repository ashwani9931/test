#include<iostream>
#include<string>
using namespace std;
class bill
{
  int charges;
  string name;
  public:
  bill(int x,string y)
  {
    charges=x;
    name=y;
  }
  int total()
  {
    
   if(charges>=100)
   {
    return charges*60;
   }
   if(charges>=200 && charges<300)
   {
    return charges*80;
   }
   if(charges>=300)
   {
    return charges*90;
   }
  }
  void display()
  {
    cout<<"name: "<<name<<" bill: "<<charges;
     cout << "\nTotal payable amount: " << total() << "\n";
  }
};
int main()
{
    int a;
    string b;
    cout<<"enter amount of electricity bill: ";
    cin>>a;
    cout<<"\nenter user name: ";
    cin>>b;
    bill s(a,b);
    s.display();

}