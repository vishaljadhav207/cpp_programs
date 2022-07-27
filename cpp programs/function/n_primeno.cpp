#include <iostream>
using namespace std;
bool isprime(int x)
{
    if(x<=1)
    return false;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}
void printprime(int n)
{
    for(int i=2;i<=n;i++)
    if(isprime(i))
    cout<<i<<" ";
}
int main()
{
    //int z=6;
    int z;
    cin>>z;
    printprime(z);
    return 0;
}