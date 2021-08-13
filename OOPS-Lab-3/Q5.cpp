#include <iostream>
using namespace std;
int area(int, int);
float area(float);
float area(float, float);
float area(double, double, float);
int main()
{
    cout << "\n2005601_Rishabh Kumar" << endl;
    int s, l, b;
    float r, bs, ht, cr, ch, pi = 3.14;
    char c;
    cout << "\nEnter C for circle, R for rectangle, T for triangle OR L for cylinder:-";
    cout << "\nEnter your choice: ";
    cin >> c;
    switch (c)
    {
    case 'C':
        cout << "\nEnter radius of circle: ";
        cin >> r;
        cout << "Area of circle is: " << area(r) << " sq. units";
        break;
    case 'R':
        cout << "\nEnter length and breadth of rectangle: ";
        cin >> l >> b;
        cout << "\nArea of rectangle is: " << area(l, b) << " sq. units";
        break;
    case 'T':
        cout << "Enter base and height of triangle: ";
        cin >> bs >> ht;
        cout << "\nArea of triangle is " << area(bs, ht) << " sq. units";
        break;
    case 'L':
        cout << "Enter radius and height of cylinder: ";
        cin >> cr >> ch;
        cout << "\nArea of cylinder is " << area(cr, ch, pi) << " sq. units";
        break;
    default:
        cout << "\nYour choice is invalid";
        break;
    }
}
int area(int l, int b)
{
    return (l * b);
}
float area(float r)
{
    return (3.14 * r * r);
}
float area(float bs, float ht)
{
    return ((bs * ht) / 2);
}
float area(double cr, double ch, float pi)
{
    return ((2 * pi * cr * ch) + (2 * pi * cr * cr));
}