#include<iostream>
using namespace std;
class test
{
    private:
    int i=0;
    static int j;
    public:
    test()
    {
        i++;
        j++;
    }
    void show()
    {
        cout<<i<<"\t"<<j<<endl;
    }
};
//static declaration
//datatype classname::variable;
int test::j;
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