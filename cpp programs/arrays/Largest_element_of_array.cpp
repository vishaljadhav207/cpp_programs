#include <iostream>
using namespace std;
int main()
{
    int i, n = 10;
    int arr[10];
    for (i = 0; i < n; i++)
    {
        cout << "enter number " << i + 1 << " ";
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
    cout << endl
         << "largest element " << arr[0];

    return 0;
}