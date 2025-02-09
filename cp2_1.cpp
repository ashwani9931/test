#include <iostream>
#include <vector>

using namespace std;
class student
{
    string name;
    vector<int> grades;

public:
    student(string n)
    {
        name = n;
    }
    void addgrades(int x)
    {
        grades.push_back(x);
    }
    double calavg()
    {
        if (grades.empty())
        {
            return 0;
        }
        int sum = 0;
        for (int x : grades)
        {
            sum += x;
        }
        return sum / (double)grades.size();
    }
    void display()
    {
        cout << "enter name: " << endl;
        cin >> name;
        cout << "enter grades: " << endl;
        cout << "grades: ";
        for (int x : grades)
        {
            cout << x << " "<<endl;
        }
        cout << "average: " << calavg();
    }
};
int main()
{
    string b;
    int a;
    cout << "enter name: " << endl;
    cin >> b;
    student s1(b);
    cout<<"enter number of grades"<<endl;
    cin>>a;
    for(int i=1;i<=a;i++)
    {
        cout<<"enter grade:"<<i<<endl;
        cin>>i;
        s1.addgrades(i);
    }
    s1.calavg();
    s1.display();
}