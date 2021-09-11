#include <iostream>
using namespace std;
class time1
{
private:
    int hour, minu;
    int *h1, *m1;

public:
    time1()
    {
        hour = 14;
        minu = 3;
        cout << "\n\nDefault constructor called : " << endl;
    }
    time1(int h)
    {
        hour = h;
        minu = 0;
        cout << "\nDefault Parameterized constructor called : " << endl;
    }
    time1(int hou, int min)
    {
        h1 = new int;
        m1 = new int;
        *h1 = hou;
        *m1 = min;
        cout << "\nDynamic constructor called : " << endl;
    }
    time1(time1 &y)
    {
        hour = y.hour;
        minu = y.minu;
    }
    void display()
    {
        hour = hour + (minu / 60);
        minu = minu % 60;
        cout << hour << ":" << minu << endl;
    }
    void output()
    {
        cout << *h1 << ":" << *m1 << endl;
    }
};
int main()
{
    cout << "\nAPNA NAAM PATA LIKHO";
    time1 t1;
    t1.display();
    time1 t2(4);
    t2.display();
    time1 t4 = t2;
    cout << "\nCopy constructor called : " << endl;
    t4.display();
    time1 t3(6, 7);
    t3.output();
    return 0;
}