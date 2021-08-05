#include <iostream>
using namespace std;
struct student
{
    int roll, m[5], total;
    float perc;
    char name[100];
};
int a;
void total_percent(struct student s[]);
void details(struct student s[]);
void range(struct student s[]);
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar";
    cout << "\n\nEnter the number of students: ";
    cin >> a;
    struct student s[a];
    for (int i = 0; i < a; i++)
    {
        cout << "\nStudent " << i + 1;
        cout << "\n Enter Roll No.: ";
        cin >> s[i].roll;
        cin.ignore();
        cout << " Enter Name: ";
        cin.getline(s[i].name, 100);
        cout << " Enter the 5 subjects marks: ";
        cin >> s[i].m[0] >> s[i].m[1] >> s[i].m[2] >> s[i].m[3] >> s[i].m[4];
    }
    total_percent(s);
}
void total_percent(struct student s[])
{
    for (int i = 0; i < a; i++)
    {
        s[i].total = s[i].m[0] + s[i].m[1] + s[i].m[2] + s[i].m[3] + s[i].m[4];
        s[i].perc = s[i].total / 5.0;
    }
    cout << "\nStudent total marks and percentage are as follows: ";
    for (int i = 0; i < a; i++)
    {
        cout << "\n\n Student " << i + 1 << ": ";
        cout << "\n Total marks of student " << i + 1 << ": " << s[i].total;
        cout << "\n Percentage of student " << i + 1 << ": " << s[i].perc;
    }
    range(s);
}
void details(struct student s[])
{
    int rol, var;
    cout << "\n\nEnter the roll no. of student for which the details can be shown: ";
    cin >> rol;
    for (int i = 0; i < a; i++)
    {
        if (s[i].roll == rol)
        {
            cout << " His/Her details are as follows: ";
            cout << "\n Name" << ": " << s[i].name;
            cout << "\n Roll No.: " << s[i].roll;
            cout << "\n Marks of the student" << ": " << s[i].m[0] << " " << s[i].m[1] << " " << s[i].m[2] << " " << s[i].m[3] << " " << s[i].m[4];
            cout << "\n Total marks of the student: " << s[i].total;
            cout <<"\n Percentage of the student: " << s[i].perc;
            cout << "\n\nMarks sorted in ascending order: ";
            for (int j = 0; j < 4; j++)
            {
                for (int k = 0; k < 5 - 1 - j; k++)
                {
                    if (s[i].m[k] > s[i].m[k + 1])
                    {
                        var = s[i].m[k];
                        s[i].m[k] = s[i].m[k + 1];
                        s[i].m[k + 1] = var;
                    }
                }
            }
            for (int j = 0; j < 5; j++)
            {
                cout << s[i].m[j] << " ";
            }
        }
    }
}
void range(struct student s[])
{
    float x, y;
    cout << "\n\nEnter the lower and higher values of percentage: ";
    cin >> x >> y;
    for (int i = 0; i < a; i++)
    {
        if (s[i].perc >= x && s[i].perc <= y)
        {
            cout << "\n\n Student " << i + 1 << ":";
            cout << "\n  Name: " << s[i].name;
            cout << "\n  Roll: " << s[i].roll;
            cout << "\n  Marks: " << s[i].m[0] << " " << s[i].m[1] << " " << s[i].m[2] << " " << s[i].m[3] << " " << s[i].m[4];
            cout << "\n  Percentage: " << s[i].perc;
        }
    }
    details(s);
}