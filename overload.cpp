#include<iostream>
using namespace std;
class sum
{
    int x;
    int y;
    public:
    sum(int s=0,int t=0)
    {
        x=s;
        y=t;
    }
    sum operator+(sum & c)
    {
        sum z;
        z.x=x+c.x;
        z.y=y+c.y;
        return z;
    }
    ~sum()
    {
        cout<<"distructor is called";
    }
    void display()
    {
        cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
    }

};
int main()
{
    sum p1(2,4),p2(3,5);
    sum p3=p1+p2;
    p3.display();
}