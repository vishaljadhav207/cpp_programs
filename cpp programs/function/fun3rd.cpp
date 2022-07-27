#include<iostream>//passing values
#include<math.h>//passing values
using namespace std;
void add(int a,int b)
{

    int c;
    c=a+b;
    cout<<"addition is "<<c<<endl;
}
int main()
{
  add(100,200);//another copy of data created is called function
  add(80,90);
  return 0;
  }
