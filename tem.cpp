#include <iostream>
using namespace std;
int main()
{
    float t, f, c;
    string choice;
    cout << "enter Celsius:" << endl;
    cin >> t;
    if (choice == "c")
    {
        c = (f - 32) / 1.8;
        cout << "Celsius:" << c << endl;
    }
    if (choice == "f")
    {
        f = (t * 1.8) + 32;
        cout << "Fahrenheit:" << f << endl;
    }
}