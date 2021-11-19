#include <iostream>
#include <string>
using namespace std;
void test(int x)
{
    try
    {
        if (x > 0)
        {
            throw x;
        }
        else
        {
            throw 'x';
        }
    }
    catch (int x)
    {
        cout << "Caught an integer and that integer is: " << x << endl;
    }
    catch (char x)
    {
        cout << "Caught a character and that character is: " << x << endl;
    }
}
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar";
    int m, n;
    cout << "Testing multiple catches:\n";
    cout << "\nEnter an integer: ";
    cin >> m;
    test(m);
    test(0);
}