#include <iostream>
using namespace std;

int countzero(int mat[2][2])
{
    // start from bottom left of matrix
    int row = 2 - 1;
    int col = 0;
    // store no of 0 in matrix
    int count = 0;
    while (col < 2)
    {
        // move until you find 0
        while (mat[row][col])
            if (--row < 0)
                return count;
        // add 0 present in current col to result
        count = count + (row + 1);
        // move right to next col
        col++;
    }
    return count;
}
int main()
{
    int mat[2][2]=
    {
        {0, 1},
        {0, 1}
    };
    cout<<countzero(mat);
    return 0;
}
