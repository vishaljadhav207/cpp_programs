#include <iostream>
using namespace std;
class A
{
public:
    virtual void show()
    {
        cout << "in A class" << endl;
    }
};
class B : public A
{
public:
    void show()
    {
        cout << "in B class" << endl;
    }
};
class C : public B
{
public:
    void show()
    {
        cout << "in C class" << endl;
    }
};
int main()
{
    A ob1;
    B ob2;
    C ob3;
    A *p;

    p = &ob1;
    p->show();
    p = &ob2;
    p->show();
    p = &ob3;
    p->show();
    return 0;
}
