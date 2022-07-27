#include<iostream>
using namespace std;
class circle
{
    private:
    float radius;

    public:
    //getter and setter function
    void setradius(float x)
    {
        radius =x;
    }
    float getradius()
    {
        return radius;
    }
};
int main()
{
circle ob1;
ob1.setradius(1.2);
float p;
p=ob1.getradius();
circle ob2;
ob2.setradius(3.4);
float q;
q=ob2.getradius();
cout<<"object 1\t"<<p<<endl;
cout<<"object 2\t"<<q<<endl;
return 0;
}

