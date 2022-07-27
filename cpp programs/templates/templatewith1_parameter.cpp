#include <iostream>
using namespace std;
template <class T>
class test
{
private:
    T i;

public:
    test(T x)
    {
        i = x;
    }
    void show()
    {
        cout << i << endl;
    }
};
int main()
{
    test<int> t1(100);
    test<string> t2("abc");
    test<string> t3("vjpatil");
    t1.show();
    t2.show();
    t3.show();
    return 0;
}