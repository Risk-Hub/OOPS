#include <iostream>
using namespace std;
class complex
{
private:
    int real[10], img[10];

public:
    void input(void);
    void output(void);
};
void complex::input(void)
{
    int i;
    cout << "\nEnter the imaginary part followed by real part:-" << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> real[i] >> img[i];
    }
}
void complex::output(void)
{
    cout << "\nThe complex numbers are as follows:-" << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << real[i];
        if (img[i] < 0)
        {
            cout << img[i] << "i" << endl;
        }
        else
        {
            cout << "+" << img[i] << "i" << endl;
        }
    }
}
int main()
{
    complex c;
    c.input();
    cout << endl;
    c.output();
    return 0;
}