#include <iostream>
#include <conio.h>
using namespace std;
class Employee
{
protected:
    int eno;
    char name[20], des[20];

public:
    void get()
    {
        cout << "Enter the employee number: ";
        cin >> eno;
        cout << "Enter the employee name: ";
        cin >> name;
        cout << "Enter the designation: ";
        cin >> des;
    }
};
class salary : public Employee
{
    float bp, hra, da, pf, np;

public:
    void get1()
    {
        cout << "Enter the basic pay: ";
        cin >> bp;
        hra = 0.5 * bp;
        da = 0.2 * bp;
        pf = 0.3 * bp;
    }

    void calculate()
    {
        np = bp + hra + da - pf;
    }
    void display()
    {
        cout << eno << "  \t\t" << name << "\t\t" << des << "\t" << bp << "\t" << hra << "\t" << da << "\t" << pf << "\t" << np << "\n";
    }
};
int main()
{
    int i, n;
    char ch;
    salary s[10];
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    cout << "\nEnter the number of employee: ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        s[i].get();
        s[i].get1();
        s[i].calculate();
    }
    cout << "\nEmp_No. \t Emp_Name\t Desig \t   BP \t HRA \t DA \t PF \t Gross Pay \n";
    for (i = 0; i < n; i++)
    {
        s[i].display();
    }
}