#include <iostream>
#include <string>
using namespace std;
int access_element(int arr[], int size, int index)
{
    if (index >= size)
    {
        throw string("Array Out Of Bound at index " + index);
    }
    return arr[index];
}
int main()
{
    cout << "\nProgrammed by 2005601_Rishabh Kumar";
    int n;
    cout << "\nEnter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    try
    {
        cout << access_element(arr, 3, 5) << endl;
    }
    catch (string e)
    {
        cout << "Exception :" << e << endl;
    }
}