#include <iostream>
using namespace std;
class demo
{
private:
    void show()
    {
        cout << "in private function" << endl;
    }

public:
    void disp()
    {
        cout << "in public function" << endl;
        show();
    }
};
int main()
{
//create object of demo class
demo t1;//   ,t2,t3;
//int a,b,c;
t1.disp();
return 0;
}


