#include <iostream>
using namespace std;
class circle
{
private:
    float radius;
    float area;

public:
    circle() //it has same name as a class name //it has no return type:
    {
        cout << "construction without arguments called:\n";
        cout << "enter radius of circle:\n";
        cin >> radius;
    }
    void calculatearea()
    {
        area = 3.14 * radius * radius;
        cout << "area  of circle:\n" << area << endl;
    }
};
int main()
{
    circle ob1;
    ob1.calculatearea();
    circle ob2;
    ob2.calculatearea();
    return 0;
}
