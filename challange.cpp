#include<iostream>
using namespace std;
int main(){
    int n,i,rem,sum=0;
    cout<<"enter numer:"<<endl;
    cin>>n;
    while(n!=0){
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    cout<<"sum: "<<sum<<endl;
}
