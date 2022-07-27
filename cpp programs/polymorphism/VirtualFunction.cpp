#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << "display base\n";
    }
    virtual void show()
    {
        cout << "show base\n";
    }
};
class derived : public base
{
public:
    void display()
    {
        cout << "display derived\n";
    }
    void show()
    {
        cout << "show derived\n";
    }
};
int main()
{
    base B;
    derived D;
    base *bptr;
    cout << "bptr points to base\n";
    bptr = &B;
    bptr->display();//call base fn
    bptr->show();
    cout << "bptr points to derived \n";
    bptr = &D;
    bptr->display();//call base fn
    bptr->show();//call derived bcoz virtual keyword.
}