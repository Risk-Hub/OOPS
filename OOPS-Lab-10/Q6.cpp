#include <iostream>
using namespace std;
class dist
{
    float feet, inches;

public:
    dist()
    {
        feet = inches = 0.0;
    }
    dist(float f, float i)
    {
        feet = f;
        inches = i;
    }
    bool operator>(dist d2);
    bool operator==(dist d2);
    dist operator+(dist d2);
    void display()
    {
        cout << feet << "feet " << inches << "inches"
             << "\n";
    }
};
dist dist::operator+(dist d2)
{
    dist d;
    d.feet = feet + d2.feet;
    d.inches = inches + d2.inches;
    return d;
}
bool dist::operator>(dist d2)
{
    float t1, t2;
    t1 = feet + inches / 12.0;
    t2 = d2.feet + d2.inches / 12.0;
    return (t1 > t2) ? true : false;
}
bool dist::operator==(dist d2)
{
    if (feet == d2.feet && inches == d2.inches)
        return true;
    else
        return false;
}
int main()
{
    dist d1(3, 7), d2(11, 9), d3(9, 12), d4;
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    cout << "\nGREATER THAN OPERATOR OVERLOADING\n";
    if (d1 > d2)
    {
        cout << "Distance-1 is more than Distance-2\n";
    }
    else
    {
        cout << "Distance-1 is less than Distance-2\n";
    }
    cout << "\nEQUAL TO OPERATOR OVERLOADING\n";
    if (d1 == d3)
    {
        cout << "Both the distance are equal\n";
    }
    else
    {
        cout << "Both the distance are unequal\n";
    }
    cout << "\n\nPLUS OPERATOR OVERLOADING TO ADD TWO OBJECTS\n";
    d4 = d2 + d3;
    d4.display();
}