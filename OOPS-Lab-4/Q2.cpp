#include <iostream>
using namespace std;
class A
{
    int a;

public:
    int area();
    void input()
    {
        cout << "\nProgrammed by 2005601_Rishabh Kumar" << endl;
        cout<<"\nEneter the edge length of cube: ";
        cin >> a;
    }
};
inline int A::area()
{
    return (6 * a * a);
}
int main()
{
    A obj;
    obj.input();
    cout << "\nThe area is: " << obj.area()<<" sq. units";
    return 0;
}