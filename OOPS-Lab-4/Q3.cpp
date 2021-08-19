#include <iostream>
using namespace std;
class student
{
private:
    char name[30];
    int yoa, yop, n;
    float m[100], avg;

public:
    void input(void);
    void output(void);
};
void student::input(void)
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar" << endl;
    cout << "\nEnter name: ";
    cin >> name;
    cout << "Enter year of admission: ";
    cin >> yoa;
    cout << "Enter year of passout: ";
    cin >> yop;
    cout << "Enter the number of subjects: ";
    cin >> n;
    cout << "Enter " << n << " subject marks: ";
    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += m[i];
    }
    avg = sum / n;
}
void student::output(void)
{
    cout << "\nStudent details:\n";
    cout << "Name: " << name << endl;
    cout << "Year of admission: " << yoa << endl;
    cout << "Year of passout: " << yop << endl;
    cout << "Average of the marks: " << avg;
}
int main()
{
    student obj;
    obj.input();
    obj.output();
    return 0;
}