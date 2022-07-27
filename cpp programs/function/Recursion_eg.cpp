#include <iostream>//factorial of num
using namespace std;
long fact(int n)
{
    if (n == 0)
        return 1;
    return (n * fact(n-1));//recursive function call
}
int main()
{
int num;
cout<<"enter number"<<endl;
cin>>num;
cout<<"factorial of "<<num<<"is"<<fact(num);
    return 0;
}