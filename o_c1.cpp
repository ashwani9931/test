#include<iostream>
using namespace std;
class a
{
    public:
    int x;
  virtual  void  display()
    {
        cout<<"enter x"<<endl;
        cin>>x;
        cout<<"In class A"<<endl;
        cout<<"x="<<x<<endl;
    }

};
class b:public a
{
    public:
    int y;
    void display()
    {
        cout<<"enter b"<<endl;
        cin>>y;
        cout<<"In class B"<<endl;
        cout<<"y="<<y<<endl;
    }
};
int main()
{
    b ob;
    ob.display();

}