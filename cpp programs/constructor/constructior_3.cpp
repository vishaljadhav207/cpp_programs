#include <iostream>
using namespace std;
class circle
{
private:
    float radius;
    float area;

public: //constructors with arguments//overloading:
    circle(float r)
    {
        radius = r;
        cout << "constructor with argument called!\n";
    }
    circle()
    {
        radius = 2.5;
        cout << "constructor without argument called!\n";
    }
    void calculatearea()
    {
        area = 3.14 * radius * radius;
        cout << "area of circle\n" << area << endl;
    }
    };
    int main()
    {
        circle ob1;
        circle ob2(1.5);
        ob1.calculatearea();
        ob2.calculatearea();
        return 0;
    }
