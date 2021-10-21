#include <iostream>
using namespace std;
class Base
{
public:
    int b = 100;
    void display()
    {
        cout << "\nIt shows a Base Class Function";
    }
};
class S : public Base
{
protected:
    int a = 200;
};

class ML : virtual public S
{
protected:
    int c = 300;

public:
    void output()
    {
        cout << "\nMULTILEVEL\nThis is an object of derived class: " << c << " and base class " << a << " and " << b << endl;
    }
};
class M : public ML, virtual public S
{
public:
    void out()
    {
        cout << "\nThese are the objects of Multiple classes: " << c << " and " << a << endl;
    }
};
int main()
{
    S s;
    M m1;
    ML m2;
    int n;
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    cout << "\n***MENU***";
    cout << "\n 1. Single inheritance";
    cout << "\n 2. Multiple inheritance";
    cout << "\n 3. Multilevel inheritance";
    cout << "\n\nEnter your choice: ";
    cin >> n;
    switch (n)
    {
    case 1:
        s.display();
        break;
    case 2:
        m1.out();
        break;
    case 3:
        m2.output();
        m2.display();
        break;
    }
    return 0;
}