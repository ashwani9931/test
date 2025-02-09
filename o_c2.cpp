 #include<iostream>
#include<string>
using namespace std;
class  student
{
public:
 virtual void display()=0;
};
class data: public student
{
    public:
    string name;
    int roll_no;
    void putdata()
    {
        cout<<"enter name: "<<endl;
        cin>>name;
        cout<<"enter roll_no"<<endl;
        cin>>roll_no;
    }
    void display()
    {
        cout<<"pure virtual class"<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"roll_no: "<<roll_no<<endl;
    }
};
int main()
{
 data ob;
 ob.putdata();
 ob.display();
}
