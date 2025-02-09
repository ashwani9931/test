#include<iostream>
using namespace std;
class a
{
 public:
 void display()
 {
    cout<<"In class A"<<endl;
 }
};
class b:public a
{
    public: 
    void getdata()
    {
        cout<<"public mode inheritance"<<endl;
        cout<<"In class B"<<endl;
    }

};
class c: private a
{
    public:
    void data()
    {
        cout<<"private mode inheritance"<<endl;
        cout<<"In class c"<<endl;
    
        display();
    }
};
class d:protected a
{
    public:
    void data_proct()
    {
        cout<<"protected mode inheritance"<<endl;
        cout<<"In class D"<<endl;
        display();
    }
};
int main()
{
   
    b ob2;
    c ob3;
    d ob4;
    ob2.display();
    ob2.getdata();
    
    ob3.data();
    ob4.data_proct();
}