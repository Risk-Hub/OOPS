#include <iostream>
#include <string.h>
using namespace std;
class Student
{
public:
    char name[10];
    int marks;

public:
    void get_data()
    {
        cout << "\n Enter the name : ";
        cin.ignore();
        cin.getline(name, 20);
        cout << "\n Enter the marks : ";
        cin >> marks;
    }
    void show_data()
    {
        cout << "\n NAME : " << name;
        cout << "\n MARKS : " << marks;
    }
};
class Toppers : public Student
{
public:
    void Sort_Rankwise()
    {
        Student S[5];
        int i, j, n;
        cout << "\nEnter the number of students : ";
        cin >> n;
        for (i = 0; i < n; i++)
            S[i].get_data();
        for (i = 0; i < n; i++)
            S[i].show_data();
        cout << "\n\nRANK WISE SORTED DETAILS";
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
                if (S[j].marks < S[j + 1].marks)
                {
                    int temp_marks = S[j].marks;
                    S[j].marks = S[j + 1].marks;
                    S[j + 1].marks = temp_marks;
                    char temp_name[20];
                    strcpy(temp_name, S[j].name);
                    strcpy(S[j].name, S[j + 1].name);
                    strcpy(S[j + 1].name, temp_name);
                }
            }
        }
        for (i = 0; i < n; i++)
        {
            cout << "\n NAME : " << S[i].name;
            cout << "\n MARKS : " << S[i].marks;
            cout << "\n**************************";
        }
    }
};
int main()
{
    Toppers T;
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    T.Sort_Rankwise();
    return 0;
}