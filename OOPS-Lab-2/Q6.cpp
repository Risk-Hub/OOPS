#include <iostream>
using namespace std;
class employee
{
    private:
    int id, age;
    float Bsal, Gsal, da, hra;
    char name[50];
    public:
    void input(void);
    void output(void);
};
int n;
struct employee emp[100], *ptr;
void employee::input(void)
{
    cout << "\nEnter no of employees : ";
    cin >> n;
    ptr = emp;
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter the details for employee " << i + 1 << ":-";
        cout << "\n Employee id: ";
        cin >> ptr->id;
        cout << " Name: ";
        cin.ignore();
        cin.getline(ptr->name, 50);
        cout << " Age: ";
        cin >> ptr->age;
        cout << " Basic Salary: ";
        cin >> ptr->Bsal;
        ptr->hra = 0.1 * ptr->Bsal;
        ptr->da = 0.8 * ptr->Bsal;
        ptr->Gsal = ptr->Bsal + ptr->da + ptr->hra;
        ptr++;
    }
    ptr = emp;
}
void employee::output(void)
{
    cout << "\n\nEmployee details are as follows:-";
    cout << "\n------------------------------------------------------------------------------------";
    cout << "\nEmployee Id"<< "     "<< "Name"<< "      "<< "Age"<< "      "<< "Basic Salary"<< "      "<< "DA"<< "       "<< "HRA"<< "\t"<< "Gross Salary";
    cout << "\n------------------------------------------------------------------------------------";
    for (int i = 0; i < n; i++)
    {
        cout << "\n"
             << ptr->id << "\t\t" << ptr->name << "       " << ptr->age << "       " << ptr->Bsal << "\t     " << ptr->da << "     " << ptr->hra << "  \t" << ptr->Gsal;
        ptr++;
    }
    ptr = emp;
}
int main()
{
    employee c;
    c.input();
    cout << endl;
    c.output();
    return 0;
}