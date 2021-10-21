#include <iostream.>
using namespace std;
class Account
{
    int acc_no;
    char name[50];

protected:
    long int balance = 0;

public:
    void deposit(long int m)
    {
        balance += m;
    }
    void display()
    {
        cout << "\nBalance = " << balance;
    }
};
class Savings : public Account
{
    long int min_balance = 1000;

public:
    void deposit(long int m)
    {
        balance += m;
        cout << "\nBalance = " << balance;
    }
    void withdraw(long int m)
    {
        if (m <= balance)
        {
            balance -= m;
            if (balance < min_balance)
                cout << "\nBalance = " << balance << " (less than minimum balance)";
            else
                cout << "\nBalance = " << balance;
        }
        else
            cout << "Cannot withdraw as balance is less than the amount.";
    }
};
class Current : public Account
{
    long int overdue = 0;

public:
    void deposit(long int m)
    {
        if (overdue >= m)
        {
            overdue -= m;
            cout << "Overdue amount after depositing = " << overdue;
        }
        else if (overdue < m && overdue > 0)
        {
            overdue = 0;
            cout << "Overdue amount after depositing = " << overdue;
        }
        else
            cout << "No need to deposit...";
    }
    void withdraw(long int m)
    {
        overdue += m;
        cout << "Overdue amout after withdrawing = " << overdue;
    }
};
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    Savings s;
    Current c;
    int ch;
    long int amount;
    cout << "Enter amount to set as balance = ";
    cin >> amount;
    s.deposit(amount);
    cout << "\nMENU\n1)Savings\n2)Current";
    cout << "\nEnter choice = ";
    cin >> ch;
    if (ch == 1)
    {
        do
        {
            cout << "\n1)Deposit\n2)Withdraw\nEnter choice = ";
            cin >> ch;
            if (ch == 1)
            {
                cout << "Enter amount to deposit = ";
                cin >> amount;
                s.deposit(amount);
            }
            else
            {
                cout << "Enter amount to withdraw = ";
                cin >> amount;
                s.withdraw(amount);
            }
            cout << "\nWant to deposit or withdraw again? (1/0) = ";
            cin >> ch;
        } while (ch != 0);
    }
    else
    {
        do
        {
            cout << "\n1)Deposit\n2)Withdraw\nEnter choice = ";
            cin >> ch;
            if (ch == 1)
            {
                cout << "Enter amount to deposit = ";
                cin >> amount;
                c.deposit(amount);
            }
            else
            {
                cout << "Enter amount to withdraw = ";
                cin >> amount;
                c.withdraw(amount);
            }
            cout << "\nWant to deposit or withdraw again? (1/0) = ";
            cin >> ch;
        } while (ch != 0);
    }
    return 0;
}