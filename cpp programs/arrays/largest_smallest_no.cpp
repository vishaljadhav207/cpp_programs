#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int i, n = 5;

    cout << "enter array:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }

    int min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "largest element " << max << endl;
    cout << "smallest element " << min << endl;
    return 0;
}
