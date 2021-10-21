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
        cout << "\nDestructor for class base 1 invoked";
    }
};
class derived1 : public base1
{
protected:
    int b;

public:
    derived1()
    {
        cout << "\nConstructor for class derived 1 invoked";
    }
    ~derived1()
    {
        cout << "\nDestructor for class derived 1 invoked";
    }
};
class derived2 : public derived1
{
    int c;

public:
    derived2()
    {
        cout << "\nConstructor for class derived 2 invoked";
    }
    ~derived2()
    {
        cout << "\nDestructor for class derived 2 invoked";
    }
};
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    cout << "\nORDER OF CONSTRUCTORS AND DESTRUCTORS IN MULTILEVEL INHERITANCE\n";
    derived2 d1;
    return 0;
}