#include <iostream>
#include <string.h>
using namespace std;
class bookstore
{
    string name;
    string author;
    float price;

public:
    void getbooks()
    {
        cout << "\nEnter name of the book: ";
        cin >> name;
        cout << "Enter name of the author: ";
        cin >> author;
        cout << "Enter the price of book: ";
        cin >> price;
    }
    friend void check(bookstore b[], int n);
};
void check(bookstore b[], int n)
{
    int i, temp = 0;
    int low, up;
    cout << "\nEnter the price range(first low then high): ";
    cin >> low >> up;
    cout << "\nThe books in the range " << low << " to " << up << " are: " << endl;
    for (i = 0; i < n; i++)
    {
        if (b[i].price >= low && b[i].price <= up)
        {
            cout << "\nName of the book" << " : " << b[i].name << endl;
            cout << "Author of the book" << " : " << b[i].author << endl;
            cout << "Price of the book" << " : " << b[i].price << endl;
            temp++;
        }
    }
    if (temp == 0)
    {
        cout << "No books are in this price range." << endl;
    }
}
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar";
    int n, i;
    cout << "\nEnter the number of books: ";
    cin >> n;
    bookstore b[n];
    for (i = 0; i < n; i++)
    {
        b[i].getbooks();
    }
    check(b, n);
    return 0;
}