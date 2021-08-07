#include <iostream>
using namespace std;
class student
{
private:
    char name[30];
    int roll, total;

public:
    void input(void);
    void output(void);
};
void student::input(void)
{
    cout << "Enter name: ";
    cin.getline(name, 30);
    cout << "Enter roll no.: ";
    cin >> roll;
    cout << "Enter total marks out of 500: ";
    cin >> total;
}
void student::output(void)
{
    cout << "Student details:\n";
    cout << "Name: " << name << endl;
    cout << "Roll number: " << roll << endl;
    cout << "Total marks: " << total << endl;
}
int main()
{
    student s;
    s.input();
    cout << endl;
    s.output();
    return 0;
}