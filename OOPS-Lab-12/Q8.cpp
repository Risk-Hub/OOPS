#include <iostream>
using namespace std;
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar";
    int a[5];
    cout << "\nInput any five integers: ";
    for (int i = 0; i < 5; ++i)
        cin >> a[i];
    for (int i = 0; i < 5; ++i)
    {
        try
        {
            if (a[i] < 0)
            {
                throw(a[i]);
            }
        }
        catch (int n)
        {
            cout << "Negative number " << n << " encountered\n";
        }
    }
    return 0;
}