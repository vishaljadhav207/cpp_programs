#include<iostream>//passing values
#include<math.h>//passing values
using namespace std;
void show(int &p)
{
    cout<< p <<endl;
    cout<< &p <<endl;

}
int main()
{
    int a=10;
    cout<<&a<<endl;
    show(a);

    return 0;
}

