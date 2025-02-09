#include <iostream>
using namespace std;
class account
{
protected:
    int acnumber;
    int balance;
public:
    account(int x, int y)
    {
        acnumber = x;
        balance = y;
    }
    account()
    {
    }
    void display()
    {
        cout << "\naccount number: " << acnumber;
        cout << "\naccount balance: " << balance << endl;
    }
};
int main()
{
    int n;
    cout << "enter the number of account" << endl;
    cin >> n;
    account *ac = new account[n];
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cout << "enter acnumber and balance: " << endl;
        cin >> a >> b;
        ac[i] = account(a, b);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "detail of account " << i + 1 << ": ";
        ac[i].display();
    }
}
