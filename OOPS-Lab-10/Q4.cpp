#include <iostream>
#include <string.h>
using namespace std;
class AddString
{
public:
    char str[100];
    AddString() {}
    AddString(char str[])
    {
        strcpy(this->str, str);
    }
    AddString operator+(AddString &S2)
    {
        AddString S3;
        strcat(this->str, S2.str);
        strcpy(S3.str, this->str);
        return S3;
    }
};
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar";
    char str1[] = "Good ";
    char str2[] = "Morning";
    AddString a1(str1);
    AddString a2(str2);
    AddString a3;
    a3 = a1 + a2;
    cout << "\nAfter Concatenation: " << a3.str << endl;
    return 0;
}