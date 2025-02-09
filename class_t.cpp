#include <iostream>
using namespace std;

template <typename T>
class Cal
{
public:
    T add(T a, T b)
    {
        return a + b;
    }
    T sub(T a, T b)
    {
        return a - b;
    }
};

int main()
{
    Cal<int> a;
    Cal<double> b;

    cout << "Integer addition: " << a.add(10, 5) << endl;
    cout << "Double subtraction: " << b.sub(10.5, 5.2) << endl;

    return 0;
}
