#include <iostream>
#include <cstring>
using namespace std;
class A
{
    char name[30];
    int roll;
    static float avg;

public:
    void input(char *p, int r, float a)
    {
        strcpy(name, p);
        roll = r;
        avg += a;
    }
    friend void show(A *arr, int n);
};
float A::avg;
void show(A *arr, int n)
{
    A::avg = (A::avg) / n;
    cout << "Average of the marks: " << A::avg << endl;
}
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar";
    int n;
    cout << "\nEnter the number of student: ";
    cin >> n;
    char a[30];
    int roll;
    float av;
    A s[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of student " << i + 1 << endl;
        cout << " Enter Name: ";
        cin.ignore();
        cin.getline(a, 30);
        cout << " Enter Roll No.: ";
        cin >> roll;
        cout << " Enter Marks: ";
        cin >> av;
        cout << endl;
        s[i].input(a, roll, av);
    }
    show(s, n);
    return 0;
}