#include <iostream>
using namespace std;
struct student
{
    char name[20];
    int roll, m[5];
};
int main()
{
    student s;
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    cout << "\nEnter the details of the student:-" << endl;
    cout << " Enter name: ";
    cin.getline(s.name, 20);
    cout << " Enter roll no.: ";
    cin >> s.roll;
    cout << " Enter 5 subject marks: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> s.m[i];
    }
    cout << "\nEntered information are as follows:-" << endl;
    cout << " Name: " << s.name << endl;
    cout << " Roll No.: " << s.roll << endl;
    cout << " 5 subject marks: ";
    for (int i = 0; i < 5; i++)
    {
        cout << s.m[i] << " ";
    }
    return 0;
}