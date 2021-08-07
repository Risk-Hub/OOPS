#include <iostream>
using namespace std;
class Complex
{
public:
    int feet, inch;
    Complex()
    {
    }
    Complex(int tempfeet, int tempinch)
    {
        feet = tempfeet;
        inch = tempinch;
    }
    Complex add(Complex c1, Complex c2)
    {
        Complex sum;
        sum.feet = c1.feet + c2.feet;
        sum.inch = c1.inch + c2.inch;
        if (sum.inch > 12)
        {
            int extra = sum.inch / 12;

            sum.feet += extra;
            sum.inch -= (extra * 12);
        }
        Output(sum);
    }
    Complex Output(Complex C3)
    {
        cout << "Sum of distance : "
             << C3.feet << " feet "
             << C3.inch << " inch";
    }  
};  
int main()
{
    int a, b, c, d;
    cout << "Enter distance 1 in feet and inch resp: ";
    cin >> a >> b;
    Complex C1(a, b);
    cout << "Enter distance 2 in feet and inch resp: ";
    cin >> c >> d;
    Complex C2(c, d);
    Complex C3;
    C3.add(C1, C2);
}