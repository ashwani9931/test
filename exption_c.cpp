#include <iostream>
using namespace std;

int divide(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero error!";
    }
    return a / b;
}

int main()
{
    int x,y;
    cout<<"enter a,b:";
    cin>>x>>y;
    try
    {
        cout <<"Result: " << divide(x, y) << endl;
         
    }
    catch (const char *e)
    {
        cerr << "Error: " << e << endl;
    }

    return 0;
}
