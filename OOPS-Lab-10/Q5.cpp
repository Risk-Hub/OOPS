#include <iostream>
using namespace std;
class T
{
    int h, m, s;

public:
    void getdata()
    {
        cin >> h >> m >> s;
    }
    void putdata()
    {
        cout << h << " hours " << m << " mins and " << s << " seconds\n";
    }
    friend T operator+(T T1, T T2)
    {
        T T;
        T.h = T2.h + T1.h;
        T.m = T2.m + T1.m;
        T.s = T2.s + T1.s;
        if (T.s >= 60)
        {
            T.m++;
            T.s -= 60;
        }
        if (T.m >= 60)
        {
            T.h++;
            T.m -= 60;
        }
        return T;
    }
    friend int operator>(T T1, T T2)
    {
        int s1, s2;
        s1 = (T1.h * 3600) + (T1.m * 60) + T1.s;
        s2 = (T2.h * 3600) + (T2.m * 60) + T2.s;
        if (s1 > s2)
            return 1;
        else
            return 0;
    }
};
int main()
{
    T t1, t2, sum;
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    cout << "Enter the hours min sec of t1 = ";
    t1.getdata();
    cout << "Enter the hours min sec of t2 = ";
    t2.getdata();
    sum = t1 + t2;
    cout << "Sum = ";
    sum.putdata();
    if (t1 > t2)
        cout << "\nt1 > t2";
    else
        cout << "\nt1 < t2";
    return 0;
}