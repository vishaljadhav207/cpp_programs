#include <iostream> //function volume is overloading three times.
using namespace std;
int volume(int);
double volume(double, int);
long volume(long, int, int);
int main()
{
    cout << "calling volume()fun for compute volume of cube=" << volume(10) << endl;
    cout << "calling volume ()fun for compute volume of cylinder=" << volume(12.3, 20) << endl;
    cout << "calling volume()fun for compute volume of rectangular box=" << volume(100L, 75, 75) << endl;
    return 0;
}
int volume(int s)//cube
{
    return (s * s * s);
}
double volume(double r, int h)//cylinder
{
    return (3.14 * r * r * h);
}
long volume(long l, int b, int h)//rectangular box
{
    return(l*b*h);
}
