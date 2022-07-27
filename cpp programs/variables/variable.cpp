#include<iostream>
using namespace std;
class test
{
    public:
    void show()
    {
        cout<<"hello vj"<<endl;

    }
    void disp();
    void add(int x,int y);
};
void test::disp()//static function
{
    cout<<"outside of class"<<endl;
}
void test::add(int x,int y)
{
    cout<<"addition is "<<x+y<<endl;
}
int main()
{
    test t1;
    t1.show();
    t1.disp();
    t1.add(100,300);
return 0;
}

