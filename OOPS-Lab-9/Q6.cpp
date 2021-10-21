#include <iostream>
#include <math.h>
using namespace std;
class shape
{
protected:
    int a, b, c, r, l, br;
};
class circle : public shape
{
    float ar;

public:
    void getdata()
    {
        cout << "Enter radius of circle = ";
        cin >> r;
    }
    void calculate_ar()
    {
        ar = 3.14 * r * r;
    }
    void putdata()
    {
        cout << "\nArea of circle = " << ar;
    }
};
class triangle : public shape
{
    float s, ar;

public:
    void getdata()
    {
        cout << "Enter 3 sides of triangle = ";
        cin >> a >> b >> c;
    }
    void calculate_ar()
    {
        s = (a + b + c) / 2.0;
        ar = sqrt(s * (s - a) * (s - b) * (s - c));
    }
    void putdata()
    {
        cout << "\nArea of triangle = " << ar;
    }
};
class rectangle : public shape
{
    float ar;

public:
    void getdata()
    {
        cout << "Enter length and breadth of rectangle = ";
        cin >> l >> br;
    }
    void calculate_ar()
    {
        ar = l * br;
    }
    void putdata()
    {
        cout << "\nArea of rectangle = " << ar;
    }
};
int main()
{
    int ch;
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    do
    {
        cout << "****MENU****\n1. Area of Circle\n2. Area of Triangle\n3. Area of Rectangle\nEnter your choice = ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            circle c1;
            c1.getdata();
            c1.calculate_ar();
            c1.putdata();
            break;
        case 2:
            triangle t1;
            t1.getdata();
            t1.calculate_ar();
            t1.putdata();
            break;
        case 3:
            rectangle r1;
            r1.getdata();
            r1.calculate_ar();
            r1.putdata();
            break;
        default:
            cout << "Invalid choice...";
        }
        cout << "\nDo you want to continue (1/0) = ";
        cin >> ch;
    } while (ch != 0);
    return 0;
}