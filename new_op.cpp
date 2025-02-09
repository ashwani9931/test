#include <iostream>
using namespace std;

int main() {
    int *ptr = new int(25);
    cout << "Value: " << *ptr << endl;

    delete ptr; 

    return 0;
}
