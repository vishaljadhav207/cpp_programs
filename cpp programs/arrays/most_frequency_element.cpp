#include <iostream>
using namespace std;
int mostfrequency(int arr[], int n)
{
    int max, count;
    int maxcount = 0;
    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;

                if (count > maxcount)
                {
                    max = arr[j];
                }
            }
        }
    }
    return max;
}
int main()
{
    int arr[] = {2, 2, 2, 4, 5, 1, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    int max = mostfrequency(arr, n);
    cout << max;
    return 0;
}