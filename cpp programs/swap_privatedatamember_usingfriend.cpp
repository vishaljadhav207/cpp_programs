#include <iostream>
using namespace std;
class B; // FORWARD DECLARATION:
class A
{
private:
    int i;

public:
    A()
    {
        i = 10;
    }
    friend void swap(A &t1, B &t2);
    void showi()
    {
        cout << i << endl;
    }
}; 
class B
{
private:
    int j;

public:
    B()
    {
        j = 20;
    }
    friend void swap(A &t1, B &t2);
    void showj()
    {
        cout << j << endl;
    }
};
void swap(A &t1, B &t2)
{
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    int k;
    k = t1.i;
    t1.i = t2.j;
    t2.j = k;
}
int main()
{
    A ob1;
    B ob2;
    ob1.showi();
    ob2.showj();
    swap(ob1, ob2);
    ob1.showi();
    ob2.showj();
    return 0;
}
