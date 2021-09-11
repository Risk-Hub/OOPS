#include <iostream>
using namespace std;
class complex
{
    int real;
    int img;
    int *r1, *i;

public:
    complex()
    {
        real = 2;
        img = 4;
    }
    complex(int a, int b)
    {
        real = a;
        img = b;
    }
    complex(complex &c)
    {
        real = c.real;
        img = c.img;
    }
    complex(int rea)
    {
        r1 = new int;
        i = new int;
        *r1 = rea;
        *i = 8;
    }
    void display()
    {
        cout << real << " + " << img << "i";
    }
    void output()
    {
        cout << *r1 << " + " << *i << "i";
    }
    ~complex()
    {
        cout << "\nDestructor is invoked";
    }
};
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    complex c1;
    complex c2(5, 9);
    complex c3 = c2;
    cout << "\nc1 = ";
    c1.display();
    cout << "\nc2 = ";
    c2.display();
    cout << "\nc3 = ";
    c3.display();
    cout << "\nc4 = ";
    complex c4(3);
    c4.output();
}