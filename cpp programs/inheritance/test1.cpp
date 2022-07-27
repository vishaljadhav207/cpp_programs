#include<iostream>
using namespace std;
class A
{
    public:
    void show()
    {
        cout<<"in A"<<endl;
    }
};
class B:public A
{
    public:
    void disp()
    {
        cout<<"In B"<<endl;
    }
};
int main()
{
    B ob;
    ob.show();
    ob.disp();
    return 0;
}