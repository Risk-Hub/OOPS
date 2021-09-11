#include <iostream>
using namespace std;
class test
{
    int *l;
    static int c;

public:
    test()
    {
        c++;
        l = new int(0);
    }
    test(int n)
    {
        c++;
        l = new int(n);
    }
    ~test()
    {
        cout << "Deleted" << endl;
        delete (l);
    }
    void display();
    static void counter();
};
int test::c = 0;
void test::display()
{
    cout << "Number : " << *l << endl;
}
void test::counter()
{
    cout << "\nNumber of objects created: " << c << endl << endl;
}
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    cout << "\nCalling functions  :" << endl;
    test a(1), b(2), c(3), d(4), e(5), f(6), g(7);
    a.display();
    b.display();
    c.display();
    d.display();
    e.display();
    f.display();
    g.display();
    a.counter();
    return 0;
}