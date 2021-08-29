#include <iostream>
using namespace std;
class A
{
private:
    int n;
    char a;

public:
    void input(int c)
    {
        switch (c)
        {
        case 1:
            cout << "\nEnter the number and character: ";
            cin >> n >> a;
            output(n, a);
            break;
        case 2:
            cout << "\nEnter the character: ";
            cin >> a;
            output(a);
            break;
        case 3:
            output();
            break;
        default:
            printf("\nYou have chosen invalid option!");
        }
    }
    void output(int n, char a)
    {
        for (int i = 0; i < n; i++)
        {
            cout << a << " ";
        }
    }
    void output(char a)
    {
        for (int i = 0; i < 80; i++)
        {
            cout << a << " ";
        }
    }
    void output(void)
    {
        for (int i = 0; i < 80; i++)
        {
            cout << "*" << " ";
        }
    }
};
int main()
{
    A o;
    int c;
    cout << "\n2005601_Rishabh Kumar\n";
    cout << "Choose the option:-" << endl;
    cout << " 1: When n and the character is given" << endl;
    cout << " 2: When n is not given and only the character is given" << endl;
    cout << " 3: When n and character both are not given" << endl;
    cout << "\nEnter the correct option: ";
    cin >> c;
    o.input(c);
}