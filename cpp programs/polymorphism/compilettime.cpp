#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "in A class" << endl;
    }
};
class B : public A
{
    public:
    void show()
    {
        cout << "in B class" << endl;
    }
};
int main()
{
   B ob1;
   A *p;
   p=&ob1;
   
   p->show();
   return 0; 
}




