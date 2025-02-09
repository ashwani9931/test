#include<iostream>
using namespace std;

class employee
{
    private:
    string name;
    int age;
    public:
    
    void setdetail()
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void display()
    {
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
    }

};
int main()
{
    int em,i;
    cout<<"enter employee: "<<endl;
    cin>>em;
    employee e[em];
    for(i=0;i<em;i++)
    {
       e[i].setdetail();
    }
    for(i=0;i<em;i++)
    {
        e[i].display();
    }
}