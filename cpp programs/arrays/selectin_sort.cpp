#include <iostream>
using namespace std;
void selection(int arr[], int n)
{
    int step, swap, index, min;
    for (step = 0; step < n; step++)
    {
        min = step;
        for (index = step + 1; index < n; index++)
        {
            if (arr[index] < arr[min])
            {
                swap = arr[index];
                arr[index] = arr[min];
                arr[min] = swap;
            }
        }
    }
}
int main()
{
    int arr[] = {6, 2, 3, 4, 5, 1, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    selection(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}