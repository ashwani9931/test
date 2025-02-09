#include<iostream>
using namespace std;

class rectangle
{
private:
double length;
double breadth;

public:
rectangle()
{
    length = 0.0;
    breadth = 0.0;
}
rectangle(double lenght)
{
    this->length = lenght;
}
rectangle(double l,double b)
{
    length=l;
    breadth=b;
}

void area()
{
    cout<<"area: "<<length*breadth;
}
void perimeter()
{
    cout<<"\nperimeter: "<<2*(length+breadth);
}

};
int main()
{
    int x,y;
    cout<<"enter length and breadth:"<<endl;
    cin>>x>>y;
    rectangle r1(2,5);
    r1.area();
    r1.perimeter();

    rectangle r2(12);

    
}