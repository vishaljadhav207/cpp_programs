#include <iostream>
using namespace std;
void waveprint(int arr[][50], int rows, int cols)
{
    for (int col = 0; col < cols; col++)
    {
        if (col % 2 == 0)//for even go to bootom 
        {
            for (int row = 0; row <= rows - 1; row++)
            {
                cout << arr[row][col] << " ";
            }
        }

        else//go to top
        {
            for (int row = rows - 1; row >= 0; row--)
            {
                cout << arr[row][col] << " ";
            }
        }
    }
      cout << endl;
}

int main()
{
    // 2d array
    int arr[50][50];
    int rows, cols;
    cin >> rows >> cols;
    // read array
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
        }
    }
    // print 2d arrays
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    waveprint(arr, rows, cols);
    return 0;
}