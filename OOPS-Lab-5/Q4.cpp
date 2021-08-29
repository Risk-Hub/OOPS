#include <iostream>
using namespace std;
class A
{
    int n;

public:
    int square();
    int cube();
    void input()
    {
        printf("\nEnter the number: ");
        cin >> n;
    }
};
inline int A::square()
{
    return n * n;
}
inline int A::cube()
{
    return n * n * n;
}
int main()
{
    A ob;
    cout << "\n2005601_Rishabh Kumar\n";
    ob.input();
    cout << "Square = " << ob.square();
    cout << "\nCube = " << ob.cube();
    return 0;
}