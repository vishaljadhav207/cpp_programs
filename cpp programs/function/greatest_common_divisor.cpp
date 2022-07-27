#include <iostream>
using namespace std;
int GCD(int x, int y)
{
    //everything devides 0
    if (x == 0)
        return y;
    if (y == 0)
        return x;
        //basecase
    if (x == y)
        return x;
        //a is greater
    if (x > y)
        return (GCD(x - y, y));
    return (GCD(y - x, x));
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout <<"gcd of "<< a <<","<< b<<" is "<<GCD(a,b);
    return 0;
}