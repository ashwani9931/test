#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "enter size" << endl;
    cin >> n;

    int a[n];
    cout << "enter element " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int *ptr = a;

    cout << "Array elements using pointers: ";
    for (int i = 0; i <n; ++i)
    {
        cout << *(ptr + i) << " ";
    }

    return 0;
}
