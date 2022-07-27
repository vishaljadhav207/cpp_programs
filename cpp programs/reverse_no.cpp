#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter Number :";
cin>>n;
while(n!=0)
{
int lastdigit=n%10;
cout<<lastdigit;
n/=10;
}
return 0;
}