#include <iostream>
#include <string>
using namespace std;
class A
{
private:
    string s;
    string s1;
    int len;
    string *sPtr;
    int *lenPtr;

public:
    A() //default constructor
    {
        s = "";
        len = 0;
        cout << "**Default constructor is called**" << endl;
    }
    A(string S, string ree, int l) //parameterized constructor
    {
        s = S;
        s1 = ree;
        len = l;
        cout << "**Parameterized constructor is called**" << endl;
    }
    A(string S, string ss) //parameterized constructor
    {
        s = S;
        s1 = ss;
        cout << "**Parameterized constructor is called**" << endl;
    }
    A(int a) //dynamic constructor
    {
        sPtr = new string;
        *sPtr = "Hello";
        lenPtr = new int;
        *lenPtr = (*sPtr).length();
        cout << "**Dynamic constructor**" << endl;
    }
    A(string S, float L) //dynamic parameterized constructor
    {
        sPtr = new string;
        *sPtr = S;
        lenPtr = new int;
        *lenPtr = L;
        cout << "**Dynamic parameterized constructor**" << endl;
    }
    ~A()
    {
        cout << "Destructor is invoked" << endl;
        delete (sPtr);
        delete (lenPtr);
    }
    void display()
    {
        cout << "String: " << s << endl;
        cout << "String Length: " << len << endl;
        cout << endl;
    }
    void display(int a)
    {
        cout << "String: " << *sPtr << endl;
        cout << "String Length: " << *lenPtr << endl;
        cout << endl;
    }
    void add()
    {
        string s3 = s.append(s1);
        int ll = s3.length();
        cout << "Resulted String: " << s3 << endl;
        cout << "Resulted String Length: " << ll << endl;
        cout << endl;
    }
};
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar\n";
    string r;
    int i;
    cout << "\nEnter the string: ";
    cin >> r;
    i = r.length();
    string ree;
    float imm;
    cout << "\nEnter another string: ";
    cin >> ree;
    imm = ree.length();
    A obj1; //default constructor
    obj1.display();
    A obj2(r, ree, i); //parameterized constructor
    obj2.display();
    A obj3(0); //dynamic constructor
    obj3.display(0);
    A obj4(ree, imm); //dynamic parameterized constructor
    obj4.display(0);
    A obj5 = obj2; //copy constructor
    obj5.display();
    A obj6(r, ree); //parameterized constructor
    obj6.add();
    return 0;
}