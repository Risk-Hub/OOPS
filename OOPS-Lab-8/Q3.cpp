#include <iostream>
using namespace std;
class student
{
    int roll;
    char name[50];
    int age;

public:
    void s_getdata()
    {
        cout << "Enter Roll No.: ";
        cin >> roll;
        cout << "Enter Name: ";
        cin.ignore();
        cin.getline(name, 50);
        cout << "Enter Age: ";
        cin >> age;
    }
    void s_putdata()
    {
        cout << "\nRoll No.: " << roll << "\nName: " << name << "\nAge: " << age << "\n";
    }
};
class test : public student
{
protected:
    int mark[5];

public:
    void t_getdata()
    {
        s_getdata();
        cout << "Enter marks in 5 subjects: ";
        for (int i = 0; i < 5; i++)
            cin >> mark[i];
    }
    void t_putdata()
    {
        s_putdata();
        cout << "Marks in 5 subjects = ";
        for (int i = 0; i < 5; i++)
            cout << mark[i] << " ";
    }
};
class result : public test
{
    int tmark;
    float percent;

public:
    result()
    {
        tmark = 0;
        percent = 0;
    }
    void tmark_percent()
    {
        for (int i = 0; i < 5; i++)
            tmark += mark[i];
        percent = tmark / 5.0;
        cout << "\nTotal marks: " << tmark << "\nPercentage: " << percent << "%";
    }
};
int main()
{
    result t1;
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    cout << "\nEnter the details of student:-\n";
    t1.t_getdata();
    cout << "\nThe details of the student are:-";
    t1.t_putdata();
    t1.tmark_percent();
    return 0;
}