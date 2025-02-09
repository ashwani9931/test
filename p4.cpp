#include<iostream>
using namespace std;
 class circle
 {
    private:
    float radius;

    public:
    circle(float f)
    {
        radius=f;
    }
    void setradius(float r){
         radius=r;
    }
    void getradius()
    {
        cout<<"area: "<<6.28*radius<<endl;
      
    }
 };
 int main()
 {
   
    int y;
    cout<<"enter radius: \n";
    cin>>y;
    circle c1(y);
    c1.getradius();
 }