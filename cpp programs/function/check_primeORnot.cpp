#include <iostream>
using namespace std;
int is_prime(int n)
{
    int i = 2;
    for (i; i <= n / 2; i++)
    {
        if (n % i == 0)

            return 0;
    }

    return 1;
}

int main()
{
    int v;
    cin >> v;
    if (is_prime(v))
    {
        cout << v << " is prime";
    }
    else
    {
        cout << v << " is not prime";
    }
    return 0;

    return 0;
}