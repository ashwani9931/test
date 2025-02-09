#include<iostream>
using namespace std;
class a
{
    public: 
    void data()
    {
        cout<<"In class a"<<endl;
    }
};
class b
{
    public:
    void display()
   {
    cout<<"In class b "<<endl;

   }
};
class c: public a,public b
{
    public:
    void getdata()
    {
        cout<<"In class c"<<endl;
    }

};
int main()

{
    c ob;
    ob.data();
    ob.display();
    ob.getdata();
}