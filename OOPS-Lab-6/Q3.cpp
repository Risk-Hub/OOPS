#include <iostream>
using namespace std;
class A
{
private:
    int x;
    static int Input;
    static int Output;

public:
    void input();
    void output();
    void display();
};
int A::Input = 0;
int A::Output = 0;
void A::input()
{
    cout << "Enter the value of x: ";
    cin >> x;
    Input++;
}
void A::output()
{

    cout << "The value of x is: " << x << endl;
    Output++;
}
void A::display()
{
    cout << "The input function has been called " << Input << " times\n";
    cout << "The output function has been called " << Output << " times\n";
}
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    A d;
    d.input();
    d.output();
    d.input();
    d.output();
    d.display();
}