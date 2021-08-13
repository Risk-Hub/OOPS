#include <iostream>
using namespace std;
class num
{
private:
    int n, fact = 1;

public:
    void input();
    void display();
};
void num::input()
{
    cout << "\nEnter a number: ";
    cin >> n;
}
void num::display()
{
    int i;
    cout << "\nThe factorial of the given number is: ";
    for (i = n; i >= 1; i--)
    {
        fact *= i;
    }
    cout << fact;
}
int main()
{
    cout << "\n2005601_Rishabh Kumar" << endl;
    num s;
    s.input();
    s.display();
}