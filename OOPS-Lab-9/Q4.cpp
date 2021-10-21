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
        cout << "Roll = ";
        cin >> roll;
        cout << "Name = ";
        cin.ignore();
        cin.getline(name, 50);
        cout << "Age = ";
        cin >> age;
    }
    void s_putdata()
    {
        cout << "\nRoll = " << roll << "\nName = " << name << "\nAge = " << age << "\n";
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
        {
            cin >> mark[i];
        }
    }
    void t_putdata()
    {
        s_putdata();
        cout << "Marks in 5 subjects = ";
        for (int i = 0; i < 5; i++)
        {
            cout << mark[i] << " ";
        }
    }
};
class sports
{
protected:
    int sport_mark;

public:
    void getsportmark()
    {
        cout << "Sports marks = ";
        cin >> sport_mark;
    }
    void displaysportmark()
    {
        cout << "\nMarks in sports = " << sport_mark;
    }
};
class result : public test, public sports
{
    int tmark;
    float percent;

public:
    result(int x, int y)
    {
        tmark = x;
        percent = y;
    }
    void tmark_percent()
    {
        for (int i = 0; i < 5; i++)
        {
            tmark += mark[i];
        }
        tmark += sport_mark;
        percent = tmark / 6.0;
        cout << "\nTotal marks = " << tmark << "\nPercentage = " << percent << "%";
    }
};
int main()
{
    result t1(0, 0);
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    cout << "**Enter the details of student**\n";
    t1.t_getdata();
    t1.getsportmark();
    cout << "\n**Displaying the details**";
    t1.t_putdata();
    t1.displaysportmark();
    t1.tmark_percent();
    return 0;
}