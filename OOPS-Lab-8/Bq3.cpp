#include <iostream>
using namespace std;
class employee
{
protected:
    string name;
    int empno;
    string designation;
};
class experience : public virtual employee
{
protected:
    int UG;
    int PG;
    int Exp;
};
class salary : public virtual employee, public experience
{
    int sal = 0;

public:
    void input();
    void calc();
    void display();
};
void salary::input()
{
    cout << "\nEnter Name: ";
    getline(cin, name);
    cout << "Enter Employee No.: ";
    cin >> empno;
    cout << "Enter Designation: ";
    cin.ignore();
    getline(cin, designation);
    cout << "\nEnter 1 for YES OR 0 for NO for the following qualification: ";
    cout << "\nPG: ";
    cin >> PG;
    cout << "UG: ";
    cin >> UG;
    cout << "Enter the no of years of experience: ";
    cin >> Exp;
}
void salary::calc()
{
    if (PG == 1)
    {
        sal = sal + 10000;
    }
    if (UG == 1)
    {
        sal = sal + 5000;
    }
    sal = sal * Exp;
}
void salary::display()
{
    cout << "\nName: " << name;
    cout << "\nEmployee No.: " << empno;
    cout << "\nDesignation: " << designation;
    cout << "\nSalary: Rs. " << sal;
}
int main()
{
    salary s;
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    s.input();
    s.calc();
    s.display();
    return 0;
}