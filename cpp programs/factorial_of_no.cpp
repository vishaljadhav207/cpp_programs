#include <iostream> //factorial of 3====3*2*1=6;
using namespace std;
int factorial(int n)
{
    int ans = 1;

    for (int i = 1; i <= n; i++)
    {
        ans = ans * i;
        /* code */
    }
    return ans;
}
int main()
{
    int v;
    cin >> v;
    cout << factorial(v);

    return 0;
}