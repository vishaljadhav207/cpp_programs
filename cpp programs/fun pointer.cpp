#include<iostream>//passing values
#include<math.h>//passing values
using namespace std;
void show(int *p)
{
    cout<<p<<endl;
    *p=*p+1;
}
int main()
{
    int a=10;
    cout<<&a<<endl;
    show(&a);
    cout<<a<<endl;
    return 0;
}
