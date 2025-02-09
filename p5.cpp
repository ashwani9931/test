#include <iostream>
using namespace std;
class complex
{

private:
    double real;
    double imaginary;

public:
    complex(double r,double i)
    {
        real = r;
        imaginary=i;
    }
    double setreal(double r)
    {
        real = r;
    }
    double getreal()
    {
       return real;
    }
    double setimaginary(double i)
    {
        imaginary = i;
    }
    double getimaginary()
    {
        return imaginary;
    }
    complex add(complex & c)
    {
        
        return complex(real+c.real ,imaginary+c.imaginary);
    }
    complex subtract(complex c)
    {
        return complex(real-c.real,imaginary-c.imaginary);
       
    }
   complex  multiply(complex & c)
    {
       return complex(real*c.real,imaginary*c.imaginary);
       
    }
    complex divide(complex & c)
    {
       return complex(real/c.real,imaginary/c.imaginary);
        
    }

    void display()
    {
        cout << real << " + " << imaginary << "i"<<endl;
    }
};
int main()
{
    double x, y,a,b;
    cout << "enter real and imaginary no. :" << endl;
    cin >> x >> y;
    cout << "enter real and imaginary no. :" << endl;
    cin>>a>>b;
    complex c1(x, y);
    complex c2(a, b);
    complex c3 = c1.add(c2);
     cout << "Addition: ";
    c3.display();
    c3=c1.subtract(c2);
    cout<<"substraction: ";
    c3.display();
    c3=c1.multiply(c2);
    cout<<"multiplication: ";
     c3.display();
    c3=c1.divide(c2);
    cout<<"divide: ";
    c3.display();
}