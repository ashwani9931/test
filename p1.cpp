#include <iostream>
using namespace std;

class em
{
private:
    string empid;
    string name;
    int age;
    int salary;

public:
    em(string x, string y, int z, int r)
    {
        empid = x;
        name = y;
        age = z;
        salary = r;
    }
    string setemid(string x)
    {
        empid = x;
    }
    string getempid()
    {
        return empid;
    }
    string setname(string y)
    {
        name = y;
    }
    string getname()
    {
        return name;
    }
    int setage(int z)
    {
        age = z;
    }
    int getage()
    {
        return age;
    }
    int setsalary(int r)
    {
        salary = r;
    }
    int getsalary()
    {
        return salary;
    }
    void getbonus()
    {
        cout << "bonus salary: " << (salary * 1.25);
    }
    void display()
    {
        cout << "employee id:" + empid + "\n"
             << "name: " + name << endl;
        cout << "age: " << age << "\n"
             << "salary: " << salary << endl;
    }
};
int main()
{
    string a, b;
    int c, d;
    cout << "enter empid,name,age and salary" << endl;
    cin >> a >> b;
    cin >> c >> d;
    em e1(a, b, c, d);
    e1.display();
    e1.getbonus();
}
