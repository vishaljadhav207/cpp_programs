#include <iostream> //showing error.
using namespace std;
class student
{
private:
    int id;
    string name;

public:
    student(int x, string z)
    {
        id = x;
        name = x;
     }
};
class marks  
{
private:
    int m1;
    int m2;

public:
    marks(int p, int q)
    {
        m1 = p;
        m2 = q;
         
    }
    int getm1()
    {
        return m1;
    }
     int getm2()
    {
        return m1;
    }
};
class Result : public student, public marks
{
private:
    int result;

public:
    Result(int a,string b,int c,int d):student(a,b),marks(c,d)
    {

    }
    void getresult()
    {
        result =getm1()+getm2();
        cout << "result is:" << result << endl;
    }
};
int main()
{
    Result ob(10,"abc",80,90);
    
    ob.getresult();
    return 0;
}
