#include <iostream>
using namespace std;
int main()
{
    int i, n, pos, value,num;
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
    cout<<"enter the element";
    cin>>num;
    for(i=0;i<n;i++){
        if(num >a[i] && num>a[i+1]){
             pos=(i+1)-i;
             cout<<"yes";
             
             break ;
        }
    }
    cout<<pos<<endl;
    for (i = n; i >= pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos-1] = num;
    for (i = 0; i <= n; i++)
    {
        cout << a[i];
    }
    return 0;
}
    