#include <iostream>
using namespace std;
bool issorted(int arr[], int n)
{
    if (n == 0 or n == 1)
    {
        return true;
    }
    if (arr[0] < arr[1] and issorted(arr + 1, n - 1))
    {
        return true;
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(int);
    cout << issorted(arr, n);
}