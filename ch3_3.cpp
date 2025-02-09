#include <iostream>
#include <string.h>

using namespace std;
class library
{
public:
    string name;
    int book;
    void addbook()
    {
        cout << "enter book name: ";
        cin >> name;
        cout << "number of books: ";
        cin >> book;
    }
    void checkout()
    {
        cout << "enter book name: ";
        cin >> name;
        cout << "number of books: ";
        cin >> book;
    }
    void checkin()
    {
        cout << "enter book name: ";
        cin >> name;
        cout << "number of books: ";
        cin >> book;
    }
    void display()
    {
        cout << name <<endl;
        cout << book <<endl ;
    }
};
int main()

{
    string a;
    int b;
    library person1, perosn2, nw1;

    person1.checkout();

    perosn2.checkin();

    nw1.addbook();
    cout << "borrowes books: "<<endl;
    cout << "total no. of books : "<<endl;

    person1.display();
    cout << "new added books: "<<endl;
    cout << "total no. of books: "<<endl;
    perosn2.display();
    cout << "new books: "<<endl;
    cout << "total no. of books: "<<endl;

    nw1.display();
}