#include <iostream>
using namespace std;
class test
{

public:
    void show()
    {
        cout << "in show()..." << endl;
    }

    void add(int x, int y)
    {
        cout << x + y << endl;
    }
};
int main()
{
    test t1;
    t1.show();
    t1.add(100,20);
    //by using pointer variable
    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;
    test *p;
    p=&t1;
    p->show();
    p->add(100,20);
    return 0;
}
