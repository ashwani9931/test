#include<iostream>
using namespace std;
class a
{
public: 
int x;
 int display()
{
    cout<<"enter x: "<<endl;
    cin>>x;
     cout<<"In class A"<<endl;
    return x;
}
};
class b: public a
{
    public: 
    int y;
    int display()
    {
        
        cout<<"enter y: "<<endl;
        cin>>y;
        cout<<"In class B"<<endl;
        return y;
    }
};
int main()
{
    b ob;
    int q=ob.display();
    cout<<q<<endl;
    

}