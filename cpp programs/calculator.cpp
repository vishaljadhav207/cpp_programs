#include<iostream>
using namespace std;
int main()
{
int a,b;
char op;
cout<<"enter expression"<<endl;
cin>>a>>op>>b;
switch (op)
{
case '+':
cout<<a+b<<endl;
    break;
    case '-':
cout<<a-b<<endl;
    break;
    case '*':
cout<<a*b<<endl;
    break;
    case '%':
cout<<a%b<<endl;
    break;

default:cout<<"enter valid operator"<<endl;
    break;
}
return 0;
}