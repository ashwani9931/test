#include<iostream>
using namespace std;
class shape
{
    public:
    virtual void display()=0;
    
};
class rect: public shape
{
    public:
    int l,b;
    void setdata()
    {
        cout<<"enter length: "<<endl;
        cin>>l;
        cout<<"enter breadth"<<endl;
        cin>>b;

    }
    void display()
    {
        cout<<"area of rectangle: "<<l*b<<endl;
    }
};
class tringle: public shape
{
    public:
    int b,h;
    void data()
    {
        cout<<"enter base: "<<endl;
        cin>>b;
        cout<<"enter height: "<<endl;
        cin>>h;

    }
    void display()
    {
        cout<<"area of tringle: "<<0.5*b*h<<endl;
    }
};
class  circle : public shape
{
    public:
    int r;
    void putdata()
    {
        cout<<"enter radius: "<<endl;
        cin>>r;
    
    }
    void display()
    {
        cout<<"area of circle: "<<3.14*r*r<<endl;
    }
};
int main()
{
    rect ob1;
    tringle ob2;
    circle ob3;
    ob1.setdata();
    ob2.data();
    ob3.putdata();
    ob1.display();
    ob2.display();
    ob3.display();
}
