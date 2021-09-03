#include <iostream>
#include <cstring>
using namespace std;
class B;
class C;
class A
{
    string *a = new string;
    friend class C;

public:
    void input(void)
    {
        cout << "\nEnter string no. 1: ";
        getline(cin, *a);
    }
    void show()
    {
        cout << "\nFirst string is: " << *a << endl;
    }
    void del()
    {
        delete a;
    }
};
class B
{
    string *b = new string;
    friend class C;

public:
    void input()
    {
        cout << "Enter string no. 2: ";
        getline(cin, *b);
    }
    void show()
    {
        cout << "Second string is: " << *b << endl;
    }
    void del()
    {
        delete b;
    }
};
class C
{
    string *c = new string;

public:
    void join(A ob, B ob1)
    {
        *c = *ob.a + *ob1.b;
    }
    void show()
    {
        cout << "After concatenation, the new string is: " << *c << endl;
    }
    void del()
    {
        delete c;
    }
};
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar";
    A ob;
    B ob1;
    C ob2;
    ob.input();
    ob1.input();
    ob.show();
    ob1.show();
    ob2.join(ob, ob1);
    ob2.show();
    ob.del();
    ob1.del();
    ob2.del();
    return 0;
}