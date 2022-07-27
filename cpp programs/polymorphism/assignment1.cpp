
#include<iostream>
using namespace std;
class genaralbank
{
   public:
   virtual float getsavinginterest()=0;
   virtual float getfixedinterest()=0;
};
class icicibank:public genaralbank
{
    public:
    float getsavinginterest()
    {
        return 8;
    }
    float getfixedinterest()
    {
        return 9.5;
    }

};
int main()
{
    icicibank ob1;
    genaralbank *p;
    p=&ob1;
    cout<<"fixed interest rete:" <<p->getfixedinterest()<<endl;
    cout<<"saving interest:"<<p->getsavinginterest()<<endl;
    return 0;
}
