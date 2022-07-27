#include<iostream>
using namespace std;
template<class T,class V>
class test
{
    private:
    T i;
    V j;
    public:
    test(T x,V y)
    {
        i=x;
        j=y;
    }
    void show()
    {
        cout<<i<<"\t"<<j<<endl;
    }
};
int main()
{
    test<string,int> t1("abc",200);//you can extend information like this
    test<int,string>t2(23,"vj");
    t1.show();
      t2.show();
    return 0;
}