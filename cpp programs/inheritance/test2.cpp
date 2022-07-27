#include<iostream>
using namespace std;
class A
{
    private:
    void one()
    {
        cout<<"in private"<<endl;
    }
    protected:
    void two()
    {
        cout<<"in protected"<<endl;
    }
    public:
    void three()
    {
        cout<<"in public"<<endl;
    }
};
class B:public A
{
    private:
    public:
    void disp()
    {
        cout<<"in derived class"<<endl;
        three();
        two();
        //one();
    }
};
int main()
{
    B ob1;
    ob1.disp();
    return 0;
}

    