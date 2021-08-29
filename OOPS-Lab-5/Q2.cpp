#include <iostream>
using namespace std;
class A
{
private:
    int l, b, h, h1;
    float r, r1;

public:
    int volume(int, int, int);
    float volume(float r, int h1);
    float volume(float r);
    void input(void)
    {
        cout << "\nEnter radius of sphere: ";
        cin >> r1;
        cout << "Enter radius and height of cylinder: ";
        cin >> r >> h1;
        cout << "Enter length, breadth and height of cuboid: ";
        cin >> l >> b >> h;
        volume(l, b, h);
        volume(r, h1);
    }
    void print(void)
    {
        cout << "\nVolume of sphere is: " << volume(r1) << " sq. units";
        cout << "\nVolume of cylinder is: " << volume(r, h1) << " sq. units";
        cout << "\nVolume of cuboid is: " << volume(l, b, h) << " sq. units";
    }
};
int A::volume(int l, int b, int h)
{
    return (l * b * h);
}
float A::volume(float r, int h1)
{
    return (3.14 * r * r * h1);
}
float A::volume(float r)
{
    return (4.0 / 3 * 3.14 * r * r * r);
}
int main()
{
    A o;
    cout << "\n2005601_Rishabh Kumar\n";
    o.input();
    o.print();
}