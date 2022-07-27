#include<iostream>
using namespace std;
class A
{
    int i;
    public:
    A()
    {
        cout<<"in A"<<endl;
        i=10;
    }
    int geti()
    {
        return i;
    }
};
class B:public A
{
    int j;
    public:
    B()
    {
        int x=geti();
        j=x*x;
        cout<<"in B"<<endl;
    }
    void add()
    {
        cout<<geti()+j<<endl;
    }
};
int main()
{
    B ob;
    ob.add();
    return 0;
}