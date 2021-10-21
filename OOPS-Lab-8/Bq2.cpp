#include <iostream>
using namespace std;
class Student
{
protected:
    string name;
    int rno;
};
class fees : public Student
{
protected:
    int fees;

public:
    void subfees();
    void recipt();
};
void fees::subfees()
{
    cout << "Enter fees: ";
    cin >> fees;
}
void fees::recipt()
{
    cout << "Amount submitted as fees: " << fees;
}
class result : public Student
{
    int m[3];
    char grade;

public:
    void input();
    void output();
};
void result::input()
{
    cout << "\nEnter your Name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter roll no: ";
    cin >> rno;
    cout << "Enter marks in 3 subjects: ";
    for (int i = 0; i < 3; i++)
    {
        cin >> m[i];
    }
}
void result::output()
{
    cout << "\nThe details of the student are:-";
    cout << "\nName: " << name;
    cout << "\nRoll no: " << rno;
    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        total = total + m[i];
    }
    cout << "\nTotal Marks: " << total;
    if (total > 20)
    {
        cout << "\nYour Grade is: A";
    }
    else if (total < 20 && total > 10)
    {
        cout << "\nYour Grade is B";
    }
    else
    {
        cout << "\nYour Grade is C";
    }
}
int main()
{
    fees f;
    result r;
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    f.subfees();
    f.recipt();
    r.input();
    r.output();
    return 0;
}