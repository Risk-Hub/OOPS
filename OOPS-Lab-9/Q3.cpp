#include <iostream>
using namespace std;
class A
{
protected:
    int x;

public:
    void getdata()
    {
        cin >> x;
    }
    void putdata()
    {
        cout << x;
    }
    A()
    {
        cout << "\nConstructor for class A invoked";
    }
    ~A()
    {
        cout << "\nDestructor for class A invoked";
    }
};
class B : public virtual A
{
    int y;

public:
    B()
    {
        cout << "\nConstructor for class B invoked";
    }
    ~B()
    {
        cout << "\nDestructor for class B invoked";
    }
};
class C : public virtual A
{
    int z;

public:
    C()
    {
        cout << "\nConstructor for class C invoked";
    }
    ~C()
    {
        cout << "\nDestructor for class C invoked";
    }
};
class D : public B, public C
{
    int m;

public:
    void getdata()
    {
        cin >> m;
    }
    void putdata()
    {
        cout << m;
    }
    D()
    {
        cout << "\nConstructor for class D invoked";
    }
    ~D()
    {
        cout << "\nDestructor for class D invoked";
    }
};
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    cout << "\nORDER OF CONSTRUCTORS AND DESTRUCTORS USING VIRTUAL BASE CLASS\n";
    D d1;
    return 0;
}