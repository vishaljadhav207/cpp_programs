 #include <iostream>//what are the name of this fun?
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
    void add(test x)
    {
        cout << x.i << "\t" << x.j << endl;
        cout << this->i << "\t" << this->j << endl;
        // int a, b;
        // a = x.i + this->i;
        // b = x.j + this->j;
        // cout<<a<<"\t"<<b<<endl;
       
    }
};
int main()
{
    test t1(10,20);
    test t2(30,40);
    t1.add(t2);
    return 0;
}
