#include <iostream>
using namespace std;
class base1
{
protected:
    int a;

public:
    base1()
    {
        cout << "\nConstructor for class base 1 invoked";
    }
    ~base1()
    {
        cout << "\nDestructor for base 1 invoked";
    }
};
class base2
{
protected:
    int b;

public:
    base2()
    {
        cout << "\nConstructor for class base 2 invoked";
    }
    ~base2()
    {
        cout << "\nDestructor for base 2 invoked";
    }
};
class derived : public base1, public base2
{
    int c;

public:
    derived(int x)
    {
        c = x;
        cout << "\nConstructor for derived class invoked";
        cout << "\n" << c;
    }
    ~derived()
    {
        cout << "\nDestructor for derived class invoked";
    }
};
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    cout << "\nORDER OF CONSTRUCTORS AND DESTRUCTORS IN MULTIPLE INHERITANCE\n";
    derived d1(10);
    return 0;
}