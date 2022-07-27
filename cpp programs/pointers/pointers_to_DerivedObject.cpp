#include <iostream>
using namespace std;
class BC
{
public:
    int b;
    void show()
    {
        cout << "b=" << b << endl;
    }
};
class DC : public BC
{
public:
    int d;
    void show()
    {
        cout << "b=" << b << "\n"
             << "d=" << d << endl;
    }
};

int main()
{
    BC *bptr; // base pointer
    BC base;
    bptr = &base;  // base address
    bptr->b = 100; // access BC via base pointer
    cout << "bptr points to base object\n";
    bptr->show();
    // derived class
    DC derived;
    bptr = &derived; // address of derived object
    bptr->b = 200;   // access DC via base pointer
    cout << "bptr points to derived object\n";
    bptr->show();
    // accessing d using pointer of type derived class DC
    DC *dptr; // derived type pointer
    dptr = &derived;
    dptr->d = 300;
    cout << "dptr is derived type pointer\n";
    dptr->show();
    cout << "using ((DC *)bptr)\n";
    ((DC *)bptr)->d = 400;
    ((DC *)bptr)->show();

    return 0;
}