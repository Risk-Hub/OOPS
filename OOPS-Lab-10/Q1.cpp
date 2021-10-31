#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    int inches;

public:
    Distance()
    {
        feet = 0;
        inches = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inches = i;
    }
    friend ostream &operator<<(ostream &output, const Distance &D)
    {
        output << "Feet: " << D.feet << " Inch: " << D.inches;
        return output;
    }
    friend istream &operator>>(istream &input, Distance &D)
    {
        input >> D.feet >> D.inches;
        return input;
    }
    Distance operator+(Distance d)
    {
        Distance temp;
        temp.feet = feet + d.feet;
        temp.inches = inches + d.inches;
        return temp;
    }
};
int main()
{
    Distance D1(10, 11), D2(7, 12), D3, D4;
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    cout << "Enter the value of object: ";
    cin >> D3;
    cout << "First Distance : " << D1 << endl;
    cout << "Second Distance :" << D2 << endl;
    cout << "Third Distance :" << D3 << endl;
    cout << "Add : d1 and d2 -" << endl;
    D4 = D1 + D2;
    cout << D4 << endl;
    return 0;
}