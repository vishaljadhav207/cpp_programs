#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==1) return 1;
    if(n==2) return 1;
    int partial1=fibo(n-1);
    int partial2=fibo(n-2);
    return partial1+partial2;
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}