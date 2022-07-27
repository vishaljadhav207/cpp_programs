#include <iostream>
using namespace std;
class A
{
    int i;

public:
    A()
    {
        cout << "contsructor without args" << endl;
        i = 10;
    }
    A(int y)
    {
        cout << "constructor with arg" << endl;
        i = y;
    }
    int geti()
    {
        return i;
    }
};
class B : public A
{
    int j;
    public:
    B(int p,int q):A(p)
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
    B ob(30,40);
    ob.add();
    return 0;
}
