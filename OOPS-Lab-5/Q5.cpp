#include <iostream>
using namespace std;
class A
{
    int a, b;

public:
    void input(void)
    {
        cout << "\nEnter two numbers: ";
        cin >> a >> b;
    }
    void swap(A &ob);
    void out(void)
    {
        cout << "\nNumbers after swapping: " << a << " " << b;
    }
};
void A::swap(A &ob)
{
    ob.a = ob.a + ob.b;
    ob.b = ob.a - ob.b;
    ob.a = ob.a - ob.b;
}
int main()
{
    A o;
    cout << "\n2005601_Rishabh Kumar\n";
    o.input();
    o.swap(o);
    o.out();
}