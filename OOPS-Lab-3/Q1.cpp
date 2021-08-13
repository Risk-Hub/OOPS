#include <iostream>
using namespace std;
class num
{
private:
    int n = 10;

public:
    void display();
};
void num::display()
{
    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }
}
int main()
{
    cout << "\n2005601_Rishabh Kumar" << endl;
    num s;
    s.display();
}