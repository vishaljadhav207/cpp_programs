#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    char ch = cin.get();
    int x = 0,
        y = 0;

    while (ch != '\n')
    {
        switch (ch)
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        }
        ch = cin.get();
    }
    cout << "X :" << x << "Y :" << y << endl;
    if (x >= 0 && y >= 0)
    {
        for (int cnt = 1; cnt <= x; cnt++)
        {
            cout << "E";
        }
        for (int cnt = 1; cnt <= x; cnt++)
        {
            cout << "N";
        }
    }

    return 0;
}