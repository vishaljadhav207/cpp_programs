#include<iostream>//passing values
#include<math.h>//passing values
using namespace std;
int  add(int a,int b)
{

    int c;
    c=a+b;
    return c;
}
float area(float r)
{
    float a;
    a=3.14*r*r;
    return a;
}
int main()
{

  int x;
  x=add(80,90);
  cout<<"addition is "<<x<<endl;
  float y;
  y=area(1.2);
  cout<<"area is"<<y<<endl;

  return 0;
  }
