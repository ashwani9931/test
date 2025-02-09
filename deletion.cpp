#include <iostream>
using namespace std;
int main()
{
    int i, n, pos, value;
    int a[10];
    cout << "enter the size of the array";
    cin >> n;
    cout << "enter the element of array";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
     for (i = 0; i < n; i++)
    {
        cout<< a[i];
    }
    cout << "enter the position";
    cin >> pos;
    if(pos<1|| pos>n){
        cout<<"invalid number";
        return 0 ;
    }
    for (i =pos-1; i <n-1; i++)
    {
        a[i] = a[i + 1];
    }
    for (i = 0; i < n-1; i++)
    {
        cout << a[i];
    }
    return 0;
}