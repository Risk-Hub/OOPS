#include <iostream>
using namespace std;
class sum
{
private:
    int i, s = 0;

public:
    void input();
    void display();
};
void sum::input()
{
    int n;
    cout << "\nEnter a number N: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        s = s + i;
    }
}
void sum::display()
{
    cout << "Sum of the numbers is: " << s;
}
int main()
{
    cout << "\n2005601_Rishabh Kumar" << endl;
    sum s;
    s.input();
    s.display();
}