#include<iostream>
using namespace std;
class time
{
int hh;
int mm;
public:
time(int x=0,int y=0)
{
    hh=x;
    mm=y;

}
time operator+(time  t)
{
    time r;
    r.hh=hh+t.hh;
    r.mm=mm+t.mm;
    return r;
     
}
void display()
{
    cout<<"time: "<<hh<<" hour "<<mm<<" min";
}


};
int main()
{
    int a,b,c,d;
    cout<<"enter s1 a,b\n";
    cin>>a>>b;
    cout<<"enter s2 c,d\n";
    cin>>c>>d;
    time s1(a,b);
    time s2(c,d);
    time s3=s1+s2;
    s3.display();

}