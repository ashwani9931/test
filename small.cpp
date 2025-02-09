#include<iostream>
using namespace std;


int main()
{
    int i,n,temp;
    cout<<"enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"enter element: ";
    for(int i=0;i< n;i++)
    {
     cin>>a[i];
    }
    int min=a[0];
    for(int i=1;i<n;i++)
    {
        if(min>a[i])
        {
            temp=a[i];
            min=a[i];
        }
    }
    cout<<"min= "<<min;
}