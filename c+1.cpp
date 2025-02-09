#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,i;
    cout<<"enter size of list: ";
    cin>>n;
    int value;
    vector<int> a;
    for(i=0;i<n;i++)
    {
        cin>>value;
        a.push_back(value);
    }
    sort(a.begin(),a.end());
    int q=a[0];
    for(i=0;i<a.size()-1;i++)
    {
      
        if(a[i]==a[i+1])
        {
            cout<<"dublicate="<<a[i]<<endl;
             a.erase(a.begin() + i);
             i--;
        }
      
    }
    for(i=0;i<a.size()-1;i++)
    {
        cout<<a[i]<<endl;
    }
}
