#include <iostream>
#include <math.h>
using namespace std;
class cordinate
{
private:
    float x1, x2, y1, y2;

public:
    void input(void);
    void output(void);
};
void cordinate::input(void)
{
    int i;
    cout << "\nEnter the first coordinate: ";
    cin >> x1 >> y1;
    cout << "\nEnter the second coordinate: ";
    cin >> x2 >> y2;
}
void cordinate::output(void)
{
    cout << "\nThe distance between these points is: " << sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int main()
{
    cordinate c;
    c.input();
    cout << endl;
    c.output();
    return 0;
}