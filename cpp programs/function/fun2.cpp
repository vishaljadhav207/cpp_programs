#include<iostream>
using namespace std;
void sayhello()
{
cout<<"hello world"<<endl;
cout<<"this is first function!!"<<endl;

}
void add()
{
    int a=20;
    int b=30;
    int c;
    c=a+b;
    cout<<"addition is "<<c<<endl;
}
int main()
{
  cout<<"before "<<endl;
  sayhello();
  cout<<"after"<<endl;
  add();
  return 0;
  }
