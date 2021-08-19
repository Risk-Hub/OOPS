#include <iostream>
using namespace std;
class A
{
    float ar;

public:
    float are(float b, float h = 5.0)
    {
        ar = 0.5 * b * h;
        cout << "\nArea of the triangle(default): ";
        return ar;
    }
    float area(float b, float h)
    {
        ar = 0.5 * b * h;
        cout << "\nArea of the triangle(actual): ";
        return ar;
    }
};
int main()
{
    A obj;
    float b, h;
    cout << "\nProgrammed by 2005601_Rishabh Kumar" << endl;
    cout << "\nEnter the base and height of the triangle: ";
    cin >> b >> h;
    cout << obj.area(b, h) << endl;
    cout << obj.are(6.0) << endl;
}