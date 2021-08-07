#include <iostream>
using namespace std;
class student
{
private:
    char name[30];
    int roll, m[5];
    float perc, total;

public:
    void input(void);
    void output(void);
};
void student::input(void)
{
    int i, sum = 0;
    cout << "Enter name: ";
    cin.getline(name, 30);
    cout << "Enter roll no.: ";
    cin >> roll;
    cout << "Enter 5 subject marks: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> m[i];
        sum += m[i];
    }
    total = sum;
    perc = (total * 100.0) / 500.0;
}
void student::output(void)
{
    cout << "Student details:\n";
    cout << "Name: " << name << endl;
    cout << "Roll number: " << roll << endl;
    cout << "Total marks: " << total << endl;
    cout << "Percentage: " << perc << "%" << endl;
}
int main()
{
    student s;
    s.input();
    cout << endl;
    s.output();
    return 0;
}