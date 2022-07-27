#include <iostream>
using namespace std;
void insertion(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int current = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev + 1] = current;
    }
}
int main()
{
    int arr[] = {6, 2, 3, 4, 5, 1, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    insertion(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}