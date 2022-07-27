#include <iostream>
using namespace std; //scope of variable
class test
{
private:
    int i = 0;

public:
    test(int i)
    {
        this->i = i;
    }
    void show()
    {
        cout << this->i << endl;
    }
};
int main()
{
    test t1(10);

    t1.show();
    
    return 0;
}