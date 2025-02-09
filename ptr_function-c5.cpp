#include <iostream>
using namespace std;
class a
{
public:
    int x;
void display()
    {
        cout << "in a enter x: " << endl;
        cin >> x;
        cout << "x= " <<x<< endl;
        cout<<"In class a"<<endl;

    }
};
class b : public a
{
public:
    int y;
    void display()
    {
        cout << "in b enter y: " << endl;
        cin >> y;
        cout << "y= " << y << endl;
        cout<<"In class b"<<endl;
    }
};
int main()
{
    b ob;
    a *ptr;
    ptr=&ob;
    ptr->display();
}