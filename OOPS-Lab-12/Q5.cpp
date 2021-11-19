#include <iostream>
#include <stdexcept>
using namespace std;
float Division(float num, float den)
{
    if (den == 0)
    {
        throw runtime_error("Math error: Attempted to divide by Zero\n");
    }
    return (num / den);
}
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar";
    float numerator, denominator, result;
    cout << "\nEnter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;
    try
    {
        result = Division(numerator, denominator);
        cout << "The quotient is " << result << endl;
    }
    catch (runtime_error &e)
    {
        cout << "Exception occurred" << endl << e.what();
    }
}