#include <iostream>
using namespace std;
void bubble(int arr[], int n)
{
    int i, j, swap;
    for (j = 0; j < n - 1; j++)
    {
        for (i = 0; i < n - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = swap;
            }
        }
    }
}
int main()
{
    int arr[] = {6, 2, 3, 4, 5, 1, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    bubble(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}