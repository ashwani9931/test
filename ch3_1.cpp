#include <iostream>
using namespace std;

int main()
{
    int i, n;
    cout << "enter size of list: ";
    cin >> n;
    int a[n];
    cout << "enter element of list:\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
        {

            min = a[i];
        }
    }
    cout << "min: " << min;
}