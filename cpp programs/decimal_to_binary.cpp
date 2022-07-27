#include <iostream>
using namespace std;
int decimal2binary(int n)
{
    int p = 1; // 10 power 0;
    int ans = 0;
    int rem;

    while (n > 0)
    {
        rem = n % 2;
        ans = ans + p * rem;
        p = p * 10;
        n = n / 2;
    }
    return ans;
}
int main()
{
    int v;
    cin >> v;
    cout << decimal2binary(v);
    return 0;
}
