#include <iostream>//binomial coefficiant//formula:n!/(n-r!)*r!
using namespace std;//error:
int fact(int x)
{
    int ans=1;
    for (int i = 1; i <= x; i++)
    {
        int ans = ans * i;
    }
    return ans;
}
int bincoff(int n, int r)
{
    int ans = fact(n)/(fact(n-r)*fact(r));
    return ans;
} 
int main()
{
    int n, r;
    cin >> n >> r;
    cout <<bincoff(n,r)<<endl;
    return 0;
}
