#include <iostream>
using namespace std;
int swapby_value(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "after_swapby_value: a: " << x << ",b: " << y;
}
void swapby_aliase(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
   cout << "\nafter_swapby_alice: a: " << a << ",b: " << b;
}
void swapby_address(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
   
}
int main()

{
    int a = 4, b = 9;
    swapby_value(a, b);

    swapby_aliase(a, b);
    a=4,b=9;
    swapby_address(&a, &b);
     cout << "\nafter_swapby_address: a: " << a << ",b: " << b;
}