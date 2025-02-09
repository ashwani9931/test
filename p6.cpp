//1


// SINGLETON CLASS MANAGER
/*#include <iostream>
#include <string>
using namespace std;

class Manager
{
private:
    string name;
    int age;
    double salary;

    Manager(string n, int a, double s) : name(n), age(a), salary(s) {}

    static Manager *instance;
    Manager(const Manager &) = delete;
    void operator=(const Manager &) = delete;

public:
    static Manager *getInstance(string name, int age, double salary)
    {
        if (instance == nullptr)
        {
            instance = new Manager(name, age, salary);
        }
        return instance;
    }
    void display()
    {
        cout << "Name: " << name << "\nAge: " << age << "\nSalary: " << salary << endl;
    }
};
Manager *Manager::instance = nullptr;
int main()
{
    Manager *mgr = Manager::getInstance("John Doe", 45, 120000);
    mgr->display();
    Manager *mgr2 = Manager::getInstance("Jane Smith", 30, 150000);
    mgr2->display();
    return 0;
}*/



//2



/*#include <iostream>
using namespace std;
class MyClass {
private:
    int* data;
public:
    MyClass(int size) {
        data = new int[size];
        cout << "Memory allocated for array of size " << size << endl;
        for (int i = 0; i < size; ++i) {
            data[i] = i + 1;
        }
    }
    ~MyClass() {
        delete data;
        cout << "Memory deallocated." << endl;
    }
    void display(int size) {
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    MyClass obj(size);
    obj.display(size);
    return 0;
}*/


// 3



//THREE FUNCTIONS TO SWAP VARIABLE
/*#include <iostream>
using namespace std;
void swapByValue(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "After swapByValue: x = " << x << ", y = " << y << endl;
}
void swapByReference(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
    cout << "After swapByReference: x = " << x << ", y = " << y << endl;
}
void swapByPointer(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
    cout << "After swapByPointer: x = " << *x << ", y = " << *y << endl;
}

int main()
{
    int a = 10, b = 20;
    cout << "Original values: a = " << a << ", b = " << b << endl;
    swapByValue(a, b);
    cout << "After swapByValue call in main: a = " << a << ", b = " << b << endl;
    swapByReference(a, b);
    cout << "After swapByReference call in main: a = " << a << ", b = " << b << endl;
    swapByPointer(&a, &b);
    cout << "After swapByPointer call in main: a = " << a << ", b = " << b << endl;
    return 0;
}*/


//4
#include <iostream>
using namespace std;
class Stack {
private:
    int* arr;       
    int top;        
    int capacity;
public:
    Stack(int size) {
        arr = new int[size];   
        capacity = size;       
        top = -1;              
    }
    ~Stack() {
        delete[] arr;         
    }
    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow!" << endl;
        } else {
            arr[++top] = value; 
            cout << "Pushed " << value << " onto the stack." << endl;
        }
    }
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return -1;
        } else {
            return arr[top--]; 
        }
    }
    bool isEmpty() {
        return top == -1;
    }
    bool isFull() {
        return top == capacity - 1;
    }
    int peek() {
        if (!isEmpty()) {
            return arr[top];
        } else {
            cout << "Stack is empty!" << endl;
            return -1;
        }
    }
};
int main() {
    int size;
    cout << "Enter stack size: ";
    cin >> size;
    Stack s(size);
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element is: " << s.peek() << endl;
    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;
    if (s.isEmpty()) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack is not empty." << endl;
    }

    return 0;
}
