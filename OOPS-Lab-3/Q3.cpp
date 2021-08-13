#include <iostream>
using namespace std;
class num
{
public:
    void display();
};
void num::display()
{
    cout << "\nThe even numbers between 1 to 150 are:" << endl;
    for (int i = 1; i <= 150; i++)
    {
        if (!(i % 2))
        {
            cout << i << " ";
        }
    }
}
int main()
{
    cout << "\n2005601_Rishabh Kumar" << endl;
    num s;
    s.display();
}