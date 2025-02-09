#include <iostream>
using namespace std;

struct Person {
    string name;
    int age;
};

int main() {
    Person person = {"Alice", 30};
    Person *ptr = &person;

    cout << "Name: " << ptr->name << ", Age: " << ptr->age << endl;

    return 0;
}
