#include <iostream>
using namespace std;

// dynamic 2d
int **create2darray(int rows, int col)
{
    int **arr = new int *[rows];
    // allocate memory for each row
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[col];
    }
    // init the array with increasing list of rows
    int value = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr[i][j] = value;
            value++;
        }
    }
    return arr;
}
int main()
{
    int rows, col;
    cin >> rows >> col;
    int **arr = create2darray(rows, col);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}