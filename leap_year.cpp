#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "enter year:" << endl;
    cin >> n;

    string r = (n % 4 == 0 && n % 100 != 0 || n % 400 == 0) ? "Leap year" : "not leap year";
    cout << n << ":is " << r;
}