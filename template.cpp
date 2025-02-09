#include<iostream>
using namespace std;
template<typename T>
T display(T x,T y)
{
    return (x>y)?x:y;
}
int main()
{
    cout << "Max of 10 and 20: " << display(10, 20) << endl;         
    cout << "Max of 10.5 and 5.5: " <<display(10.5, 5.5) << endl;    
    cout << "Max of 'A' and 'B': " << display('A', 'B') << endl;     
    return 0;
}

