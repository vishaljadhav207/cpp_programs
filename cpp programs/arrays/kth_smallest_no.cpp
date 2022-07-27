#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int createpartition(int arr[], int low, int high)
{
    int pivot, index;
    index = low;
    pivot = high;
    for (int i = 0; i < high; i++)
    {
        if (arr[i] < arr[pivot])
        {
            swap(&arr[i], &arr[index]);
            index++;
        }
    }
    swap(&arr[pivot], &arr[index]);
    return index;
}
int partition(int arr[], int low, int high, int k)
{
    int pindex;
    if (low < high)
    {
        pindex = createpartition(arr, low, high);
        if (pindex == k - 1)
            return k - 1;
        else if (pindex > k - 1)
            partition(arr, low, pindex - 1, k);
        else
            partition(arr, pindex + 1, high, k);
    }
    return pindex;
}
int main()
{
    int n;
    cout << "enter the no of data element " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter element " << i + 1 << " ";
        cin >> arr[i];
    }
    int k;
    cout << "enter the k for the kth smallest element "
         << " \n";
    cin >> k;
    int kk = partition(arr, 0, n - 1, k);
    cout << "\nthe kth smallest element is " << arr[kk];
    return 0;
}
