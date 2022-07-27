#include <iostream>
using namespace std;
class A
{
private:
public:
    // Abstract function
    // pure virtual function
    virtual void show() = 0;
};
class B : public A
{
private:
public:
    void show()
    {
        cout << "In class B" << endl;
    }
};
class C : public B
{
private:
public:
    void show()
    {
        cout << "In class C" << endl;
    }
};

int main()
{

    B ob2;
    C ob3;
    A *p;

    p = &ob2;
    p->show();

    p = &ob3;
    p->show();

    return 0;
}