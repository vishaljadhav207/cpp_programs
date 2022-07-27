#include<iostream>
using namespace std;
int power(int x,int n)
{
    if(n==0) return 1;
  int partial=power(x,n-1);
    return x * partial;
}
int main()
{
int x,n;
    cin>>x>>n;
    cout<<"power of "<<x<<" raised to "<<n<<" is "<<power(x,n);
 

    return 0;

}