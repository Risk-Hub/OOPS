#include <iostream>
using namespace std;
class bank
{
private:
    char name[30], toa[20];
    long int accn;
    int bal, dep, wtd;

public:
    void input(void);
    void output1(void);
    void output2(void);
    void output3(void);
};
void bank::input(void)
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar" << endl;
    cout << "\nEnter name of depositor: ";
    cin >> name;
    cout << "Enter account number: ";
    cin >> accn;
    cout << "Enter type of account: ";
    cin >> toa;
    cout << "Enter balance amount in the account: ";
    cin >> bal;
}
void bank::output1(void)
{
    cout << "\n\nName: " << name << endl;
    cout << "Account Number: " << accn << endl;
    cout << "Type of account: " << toa << endl;
    cout << "Balance amount in the account: " << bal;
}
void bank::output2(void)
{
    cout << "\n\nEnter the amount to be deposited: ";
    cin >> dep;
    cout << "\nNow the balance is: " << bal + dep;
}
void bank::output3(void)
{
    cout << "\n\nEnter the amount to be withdrawn: ";
    cin >> wtd;
    if (wtd <= bal + dep)
    {
        cout << "\nNow the balance is: " << bal + dep - wtd;
    }
    else if (wtd > bal + dep)
    {
        cout << "\nInsufficient Amount";
    }
}
int main()
{
    bank obj;
    obj.input();
    obj.output1();
    obj.output2();
    obj.output3();
    return 0;
}