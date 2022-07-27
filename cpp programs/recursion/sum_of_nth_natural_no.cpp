#include <iostream>
using namespace std;
int sum(int n)
{
    if (n == 1)
        return 1;
    int partialans = sum(n - 1);
    return n + partialans;
}
int main()
{
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}