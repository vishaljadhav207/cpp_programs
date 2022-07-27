#include <iostream>
using namespace std;
pair<int, int> staircase(int arr[][4], int n, int m, int key)
{
    if (key < arr[0][0] or key > arr[n - 1][n - 1])
    {
        return {-1, -1};
    }
    // staircase search
    int i = 0;
    int j = n - 1;
    while (i <= n - 1 && j >= 0)
    {
        if (arr[i][j] == key)
        {
            return {i, j};
        }
        else if (arr[i][j] > key)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return {-1, -1};
}
int main()
{
    // 2d row and column wise sorted array
    int arr[][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}};
    int n = 4, m = 4;
    pair<int, int> coords = staircase(arr, n, m, 33);
    cout << coords.first << " row"
         << " ," << coords.second << " col" << endl;
    return 0;
}