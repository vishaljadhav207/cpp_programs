#include<iostream>
using namespace std;
int getithbit(int n,int i)
{
    int mask=(1<<i);
    return (n&mask)>0?1:0;

}
void setithbit(int &n,int i)
{
    int mask=(1<<i);
    n=(n|mask);
}
void clearithbit(int &n,int i)
{
    int mask=~(1<<i);
    n=n&mask;
}
int main()

{
    int n=13;
    int i;//position
    cin>>i;
    //cout<<getithbit(n,i)<<endl;
    //setithbit(n,i);
    //co;ut<<n
    clearithbit(n,i);
    cout<<n;
    return 0;

}