#include<iostream>
#include<string>
using namespace std;
int main(){
string s1,s2;
cout<<"enter string s1,s2"<<endl;
cin>>s1>>s2;
s1.append(s2);
cout<<"after concenate: ";
cout<<s1<<endl;


}
