#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n ;
    cout<<"size";
    cin>>n;
    std::vector <int> a(n);
    for(int i=0;i<a.size();i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(int i:a)
    {
        cout<<" "<<i;
    }
    
}