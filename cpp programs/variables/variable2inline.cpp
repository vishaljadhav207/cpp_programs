#include<iostream>
using namespace std;
class test
{
    private:
    int i=0;
    public:
    test()
    {
        i++;
    }
    void show()
    {
        cout<<i<<endl;
    }
};
int main()
{
    test t1;
    test t2;
    test t3;
    t1.show();
    t2.show();
    t3.show();
    return 0;
    
}