#include <iostream>
using namespace std;
int binary2decimal(int n)
{
    int p = 1;
    int ans = 0;
    while (n != 0)
    {
        int lastdigit = n % 10;
        ans = ans + lastdigit * p;
        p = p * 2;
        n = n / 10;
    }

    return ans;
}
int main()
{
int n;
cin>>n;
cout<<binary2decimal(n)<<endl;
}