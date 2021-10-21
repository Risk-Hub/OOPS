#include <iostream>
using namespace std;
class Student
{
protected:
    string name;
    int rno, age;
};
class test : public Student
{
    int m[5];

public:
    void get_details();
    void show_details();
};
void test::get_details()
{
    cout << "\nEnter the details of the student:-" << endl;
    cout << "Enter Name: ";
    getline(cin, name);
    cout << "Enter Roll No.: ";
    cin >> rno;
    cout << "Enter Age: ";
    cin >> age;
    cout << "Enter marks of 5 subjects: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> m[i];
    }
}
void test::show_details()
{
    cout << "\nThe details of the student are as follows:-";
    cout << "\nName: " << name;
    cout << "\nRoll No.: " << rno;
    cout << "\nAge: " << age;
    cout << "\nMarks in 5 subjects:";
    for (int i = 0; i < 5; i++)
    {
        cout << m[i] << " ";
    }
}
int main()
{
    test t;
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    t.get_details();
    t.show_details();
    return 0;
}