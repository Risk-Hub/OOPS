#include <iostream>
using namespace std;
class inc
{
public:
    int val;
    void increment();
} s;
void inc::increment()
{
    val++;
    cout << "The incremented value is: " << val;
}
int main()
{
    cout << "\n2005601_Rishabh Kumar\n";
    cout << "\nEnter the number: ";
    cin >> s.val;
    s.increment();
    return 0;
}