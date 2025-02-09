#include <iostream>
#include <string.h>
using namespace std;

class employee
{
private:
    int id_no;
    string name;
    int salary;

public:
    employee(int, string, int);

    employee(employee &r)
    {
        id_no = r.id_no;
        name = r.name;
        salary = r.salary;
        cout << "Copy Constructor Called" << endl;
    }
    void display();
};

employee::employee(int no, string n, int s)
{
    id_no = no;
    name = n;
    salary = s;
}
void employee::display()
{
    cout << id_no << "  " << name << "  " << salary << endl;
}
int main()
{
    employee s(1001, "raju", 200000);
    s.display();

    employee ram(s);
    ram.display();
}