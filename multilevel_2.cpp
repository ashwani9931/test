#include<iostream>
using namespace std;
class circle
{
    public:
    float r;
    
    void getdata()
    {
        cout<<"enter radius: "<<endl;
        cin>>r;
    }
    void area()
    {
        cout<<"circumfrence= "<<2*3.14*r<<endl;
        cout<<"area= "<<3.14*r*r<<endl;
    }
};
class cylinder: public circle
{
    public:
    float h;
   void set_height()
   {
    cout<<"enter height: "<<endl;
    cin>>h;
   }
   void s_area()
   {
    float total=2*3.14*r*(h+r);
    cout<<"surface area: "<<total<<endl;
   }
   void volume()
   {
    cout<<"volume: "<<3.14*r*r*h<<endl;
   }

};
class cone:public cylinder 
{
    public:
    float s;
    void input()
    {
        cout<<"enter slant height: "<<endl;
        cin>>s;
    }
    void c_cone()
    {
        cout<<"sa: "<<3.14*r*(r+s)<<endl;
    }
    void c_volume()
    {  
         cout<<"volume: "<<(1.0/3.0)*3.14*r*r*h<<endl;
    }

};
int main()
{
    cone a;
    a.getdata();
    a.set_height();
     a.input();
    a.area();
    a.s_area();
    a.volume();
    a.c_volume();
    a.c_cone();
}
 