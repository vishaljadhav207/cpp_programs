#include <iostream>
using namespace std;
class test
{
    private:
    int i,j;
    public:
    test(int x,int y)
    {
      i=x;
      j=y;
    }
    test()
    {
        i=0;
        j=0;
    }
    test operator+(test ob)
    {
        test temp;
        temp.i=this->i+ob.i;
        temp.j=this->j+ob.j;
        cout<<"operator function called!!"<<endl;
        return (temp);
      }
      void show()
      {
      cout<<i<<"\t"<<j<<endl;
      }
};
int main()
{
    test t1(10,20);
    test t2(30,40);
    test t3=t1+t2;
    t3.show();
    return 0;

}