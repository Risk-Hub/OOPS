#include <iostream>
using namespace std;
class Life
{
private:
    int mfd, exp, l;

public:
    void input(void)
    {
        cout << "Enter manufacturing and expiry year respectively: ";
        cin >> mfd >> exp;
    }
    void calc(Life &);
};
void Life::calc(Life &a) //call by reference
{
    a.l = a.exp - a.mfd;
    cout << "\nLife time of product(pass by reference): " << a.l;
}
int main()
{
    Life a;
    cout << "\n2005601_Rishabh Kumar\n";
    a.input();
    a.calc(a);
    return 0;
}