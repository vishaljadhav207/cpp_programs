#include <iostream>
using namespace std;
class test
{
private:
    int i, j;

public:
    test(int x, int y)
    {
        i = x;
        j = y;
    }
    void show(test x)
    {
        cout << x.i << "\t" << x.j << endl;
    }
    friend void add(test x);
};
void add(test x)
{
    // cout << x.i << "\t" << x.j << endl;
    // cout << this->i << "\t" << this->j << endl;
    cout<<x.i<<"\t"<<x.j<<endl;
}
int main()
{
    test t1(10,20);
    test t2(30,40);
    add(t2);
    return 0;
}