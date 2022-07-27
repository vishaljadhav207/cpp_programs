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
    void add(test &x)
    {
        cout<<"address of parameter x:"<<&x<<endl;
    }
};
int main()
{
    test t1(10,20);
    test t2(30,40);
    t1.add(t2);
    cout<<"address of t2:"<<&t2<<endl;
    return 0;
}