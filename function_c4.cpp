#include<iostream>
using namespace std;
class a
{
public: 
int x;
virtual void display()
{
    cout<<"enter x: "<<endl;
    cin>>x;
    cout<<"x= "<<endl;
}
};
class b: public a
{
    public: 
    int y;
    void display()
    {
        cout<<"enter y: "<<endl;
        cin>>y;
        cout<<"y= "<<y<<endl;
        cout<<"In class B"<<endl;
    }
};
int main()
{
    b ob;
    ob.display();
    

}