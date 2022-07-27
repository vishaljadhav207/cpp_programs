#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
        return 1;
    int partialans = factorial(n - 1);
    return n * partialans;
}
int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "error";
    }
    else
    {
        cout << factorial(n);
    }
    return 0;
}
