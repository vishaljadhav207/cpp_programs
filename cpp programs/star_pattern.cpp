#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter no" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int spaces = 1; spaces <= n - i; spaces++)
        {
            cout << " ";
        }
        for (int star = 1; star <= 2 * i - 1; star++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}