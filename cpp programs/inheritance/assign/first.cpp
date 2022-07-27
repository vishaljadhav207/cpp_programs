#include<iostream>
using namespace std;
class animal
{
    private:
   
    public:
    void eat()
    {
     cout<<"dogs are eating\n";
    }
    void sleep()
    {
        cout<<"dogs are sleeping\n";
    }

};
class bird:public animal
{
    public:
     void fly()
    {
     cout<<"bird are fly\n";
    }
    void flying()
    {
        cout<<"birds are flying\n";
    }
};


int main()
{
    bird ob;
    ob.fly();
    ob.flying();
    ob.eat();
    ob.sleep();
    return 0;

}