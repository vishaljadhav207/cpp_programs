#include <iostream>
using namespace std; //scope of variable
class test
{
private:
    int i = 0;

public:
    test(int i)
    {
        i = i;//for output 10 we can use this fun
    }
    void show()
    {
        cout << i << endl;
    }
};
int main()
{
    test t1(10);

    t1.show();

    return 0;
}