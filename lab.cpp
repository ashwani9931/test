
#include <iostream>
#include<string>

using namespace std;
 class student{
    private:
    string name;
    string address;
    int roll;
     
     public:
     student(){
        cout<<"enter name "<<endl;
        cin>>name;
        cout<<"enter address:"<<endl;
        cin>>address;
        cout<<"roll"<<endl;
        cin>>roll;
     }
     void display(){
     cout<<endl<<name<<endl<<address<<endl<<roll<<endl;
     }

 };
 int main(){
    student st1;
    st1.display();
    return 0;
    
 }