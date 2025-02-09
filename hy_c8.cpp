#include <iostream>
using namespace std;

class a
{
public:
    int displaya()
    {
        cout << "In class a " << endl;
    }
};
class b : public a
{
public:
    int displayb()
    {
        cout << "In class b" << endl;
    }
};
class c : public a
{
public:
    void displayc()
    {
        cout << "In class c" << endl;
    }
};
class d : public b,public c
{
public:
    int displayd()
    {
        cout << "In class d" << endl;
    }
};
int main()
{
    b ob1;
    c ob2;
    d ob3;
    ob1.displaya();
    ob1.displayb();
    ob2.displayc();
    ob3.displayd();

}