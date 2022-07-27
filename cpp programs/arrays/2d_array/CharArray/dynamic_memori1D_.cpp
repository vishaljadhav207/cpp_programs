#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // dynamic array-1d
    int *arr = new int[100];
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
        cout << arr[i] << " ";
    }
    // delete
    delete[] arr;
    return 0;
}