#include <iostream>
using namespace std;
void print(int arr[][10], int n, int m)
{
    // 4 variable
    int startrow = 0;
    int endrow = n - 1;
    int startcol = 0;
    int endcol = m - 1;
    // outer loop transverse array boundry
    while (startcol <= endcol && startrow <= endrow)
    {
        // start row
        for (int col = startcol; col <= endcol; col++)
        {
            cout << arr[startcol][col] << " ";
        }
        // end col
        for (int row = startrow + 1; row <= endrow; row++)
        {
            cout << arr[row][endcol] << " ";
        }
        // end row
        for (int col = endcol - 1; col >= startcol; col--)
        {
            if (startrow == endrow)
            {
                break;
            }
            cout << arr[endrow][col] << " ";
        }
        // start col
        for (int row = endrow - 1; row >= startrow + 1; row--)
        {
            // avoiding duplicate printing of element
            if (startcol == endcol)
            {
                break;
            }
            cout << arr[row][startcol] << " ";
        }
        // update the variable to point to inner spiral
        startrow++;
        endrow--;
        startcol++;
        endcol--;
    }
}
int main()
{
    // print in spiral

    int arr[][10] = {{1, 2, 3, 4},
                     {12, 13, 14, 5},
                     {11, 16, 15, 6},
                     {10, 9, 8, 7}};

    int n = 4, m = 4;
    print(arr, n, m);
    return 0;
}