#include<iostream>
#include<set>
using namespace std;
 int main(){
    int i,n;
    cout<<"enter sizeof array:"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter element:"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];

    }
    multiset<int> st;
    multiset<int>::iterator j;
    for(i=0;i<n;i++){
        st.insert(a[i]);
    }
    cout<<"sorted array"<<endl;
    for(j=st.begin();j!=st.end();j++){
        cout<<*j<<endl;
    }
 }