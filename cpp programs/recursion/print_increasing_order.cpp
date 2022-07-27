#include <iostream>
using namespace std;
void increased(int n)
{
    if (n == 0)
        return;
    increased(n - 1);
    cout << n << ",";
}
int main()
{
    int n;
    cin >> n;
    increased(n);
    return 0;
}