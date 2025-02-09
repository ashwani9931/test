#include<iostream>
#include<string>
using namespace std;
class student
{
int *rollno;
string name;
public:
student(int x,string y)
{
   rollno = new int;
   *rollno=x;
   name=y; 
}
student(student & c)
{
rollno = new int;
*rollno=*c.rollno;
name=c.name;
cout<<"copy constructor is called:\n";
}
~student()
{
   cout<<"\ndistructor is excuated";
}
void display()
{
cout<<*rollno<<endl;
cout<<name;
}

};
int main()
{
 student s(2,"mac");
 student r(s);
 s.display();
 
 r.display();
}
