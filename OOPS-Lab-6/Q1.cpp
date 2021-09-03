#include <iostream>
using namespace std;
class B;
class A
{
private:
    int a;

public:
    A()
    {
        cout << "\nEnter the value of a: ";
        cin >> a;
    }
    void show()
    {
        cout << "\nAfter swapping, a is: " << a;
    }
    friend void swap(A *num1, B *num2);
};
class B
{
private:
    int b;

public:
    B()
    {
        cout << "Enter the value of b: ";
        cin >> b;
    }
    void show()
    {
        cout << "\nAfter swapping, b is: " << b;
    }
    friend void swap(A *a, B *b);
};
void swap(A *no1, B *no2)
{
    int no3;
    no3 = no1->a;
    no1->a = no2->b;
    no2->b = no3;
}
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar";
    A ob1;
    B ob2;
    swap(&ob1, &ob2);
    ob1.show();
    ob2.show();
    return 0;
}