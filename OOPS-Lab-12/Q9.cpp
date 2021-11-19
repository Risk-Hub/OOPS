#include <iostream>
using namespace std;
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar";
    string str;
    cout << "\nEnter a string: ";
    getline(cin, str);
    try
    {
        for (int i = 0; i < str.size(); ++i)
        {
            if (str[i] == ' ')
            {
                throw(1);
            }
        }
    }
    catch (int n)
    {
        cout << "Space encountered\n";
        return 0;
    }
    cout << "Entered string is " << str;
    return 0;
}