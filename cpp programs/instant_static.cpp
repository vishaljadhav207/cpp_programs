#include<iostream>
using namespace std;
class test
{
    private:
    int i=0;//instant
    static int j;//static
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
    static void disp()
    {
        cout<<j<<endl;
    }
    static bool iseven(int x)
    {
        bool f=false;
        if(x%2==0)
        {
            f=true;
        }
        return f;
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
    test::disp();
    t1.show();
    t2.show();
    t3.show();
    cout<<"######################################\n";
    bool f=test::iseven(18);
    if(f==true)
    {
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
    return 0;
    
}