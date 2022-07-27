#include<iostream>
using namespace std;
 int main()
{
 float number1,number2,sum,avg;
    cout<<"enter 2 numbers:";
    cin>>number1;//read num from keyboard:
    cin>>number2;
    sum=number1+number2;
    avg=sum/2;
    cout<<"sum="<<sum<<endl;
    cout<<"avg="<<avg<<endl;
    return 0;
}
