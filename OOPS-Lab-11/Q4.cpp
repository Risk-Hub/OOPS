#include <iostream>
using namespace std;
class Shape
{
protected:
    float dimension;

public:
    void Dimension()
    {
        cin >> dimension;
    }
    virtual float calculateArea() = 0;
};
class Square : public Shape
{
public:
    float calculateArea()
    {
        return dimension * dimension;
    }
};
class Circle : public Shape
{
public:
    float calculateArea()
    {
        return 3.14 * dimension * dimension;
    }
};
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    Square square;
    Circle circle;
    cout << "Enter the side of the square: ";
    square.Dimension();
    cout << "Area of square: " << square.calculateArea() << endl;
    cout << "\nEnter the radius of the circle: ";
    circle.Dimension();
    cout << "Area of circle: " << circle.calculateArea() << endl;
    return 0;
}