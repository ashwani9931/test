#include<iostream>
#include<algorithm>
#include<list>
using namespace  std;
int main()
{
    int n;

    list<int> num;
    
    list<int>::iterator j;
    cout<<"enter element of list ";
   for(j=num.begin();j!=num.end();j++)
   {
    cin>>*j;
   }
   reverse(num.begin(),num.end());
   cout<<"\nreverse list: ";
   for(auto i:num)
   {
    cout<<i<<" ";
   }


}