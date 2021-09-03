#include <iostream>
using namespace std;
class B;
class A
{
private:
    float x, y, temp1, temp2;

public:
    friend void large(A &, B &);
    void input()
    {
        cout << "\nEnter the distance in feet and inches resp: ";
        cin >> x >> y;
        temp1 = x;
        temp2 = y;
        x *= 30.48;
        y *= 2.54;
        x = x + y;
    }
};
class B
{
private:
    float a, b, temp1, temp2;

public:
    friend void large(A &, B &);
    void input()
    {
        cout << "\nEnter the distance in meter and centimeter resp: ";
        cin >> a >> b;
        temp1 = a;
        temp2 = b;
        a *= 100;
        a = a + b;
    }
};
void large(A &p, B &q)
{
    if (p.x > q.a)
    {
        cout << "\n" << p.temp1 << " feet and " << p.temp2 << " inch is greater";
    }
    else
    {
        cout << "\n" << q.temp1 << " meter and " << q.temp2 << " centimeter is greater";
    }
}
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar";
    A p;
    p.input();
    B q;
    q.input();
    large(p, q);
}