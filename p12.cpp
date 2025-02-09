#include<iostream>
using namespace std;
class complex
{
    private:
int real;
int img;
    public:
    complex(int x=0,int y=0)
    {
        real=x;
        img=y;
    }
    complex operator+(complex & t)
    {
        complex res;
        res.real=real+t.real;
        res.img=img+t.img;
        return res;
    }
    complex operator-(complex & t)
    {
        complex res;
        res.real=real-t.real;
        res.img=img-t.img;
        return res;
    }
    complex operator*(complex & t)
    {
        complex res;
        res.real=real*t.real;
        res.img=img*t.img;
        return res;
    }
    complex operator/(complex & t)
    {
        complex res;
        res.real=real/t.real;
        res.img=img/t.img;
        return res;
    }
    void print()
    {
        cout<<real<<"+i"<<img<<"\n";
       
        
    }
};
int main ()
{
   
    complex c1(2,5),c2(4,2);
    complex c3=c1+c2;
    cout<<"addition: ";
    c3.print();
    cout<<"subtraction: ";
    c3=c1-c2;
    c3.print();
    cout<<"multiplication: ";
    c3=c1*c2;
    c3.print();
    cout<<"division: ";
    c3=c1/c2;
    c3.print();
}