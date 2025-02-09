#include <iostream>
using namespace std;
class rectangle
{
private:
    int l;
    int b;

public:
    rectangle(int x, int y)
    {
        l = x;
        b = y;
    }
    int area()
    {
        return l * b;
    }
};
int main()
{

    int z,c;
    cin>>z;
    cin>>c;
    rectangle rect(z, c);
    cout << "area=" << rect.area();
    return 0;
}