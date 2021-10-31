#include <iostream>
#include <math.h>
using namespace std;
class complex
{
    int real, img;

public:
    complex(int x, float y)
    {
        real = x;
        img = y;
    }
    void display()
    {
        if (img >= 0)
        {
            cout << real << " + " << img << "i\n";
        }
        else
        {
            cout << real << " - " << abs(img) << "i\n";
        }
    }
    void operator++(int)
    {
        ++real;
        ++img;
    }
    void operator++()
    {
        real++;
        img++;
    }
};
int main()
{
    complex c1(6, 12);
    complex c2(4, 9);
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    cout << "BEFORE INCREMENT\nD1 = ";
    c1.display();
    cout << "D2 = ";
    c2.display();
    ++c1;
    c2++;
    cout << "\nAFTER INCREMENT\n";
    cout << "D1 = ";
    c1.display();
    cout << "D2 = ";
    c2.display();
    return 0;
}