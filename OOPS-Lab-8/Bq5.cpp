#include <iostream>
#include <string.h>
using namespace std;
class Player
{
protected:
    string name;
    int pno, age;

public:
    void get()
    {
        cout << "\nEnter the details of the player:-";
        cout << "\nEnter player no.: ";
        cin >> pno;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
    void output()
    {
        cout << "\nThe details of the player are:-";
        cout << "\nName: " << name;
        cout << "\nPlaye No.: " << pno;
        cout << "\nAge: " << age;
    }
};
class BaseBall : public Player
{
public:
    void display()
    {
        output();
    }
};
int main()
{
    BaseBall B;
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    B.get();
    B.display();
    return 0;
}