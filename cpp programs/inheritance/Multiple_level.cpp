#include <iostream>
using namespace std;
class student
{
private:
    int id;
    string name;

public:
    void setid(int x)
    {
        id = x;
    }
    int getid()
    {
        return id;
    }
    void setname(string x)
    {
        name = x;
    }
    string getname()
    {
        return name;
    }
    void showid()
    {
        cout << "id & name\n"
             << getid() << "\t" << getname() << endl;
    }
};
class marks
{
private:
    int m1, m2;

public:
    void setm1(int x)
    {
        m1 = x;
    }
    int getm1()
    {
        return m1;
    }
    void setm2(int x)
    {
        m2 = x;
    }
    int getm2()
    {
        return m2;
    }
    void showresult()
    {
        cout << "marks of the stu:\n"
             << "\t" << m1 << "\t" << m2 << "\t" << endl;
    }
};
class result : public student, public marks
{
private:
public:
    void avg()
    {
        cout << "result of student:" << getm1() + getm2() << endl;
    }
};
int main()
{
    result ob;
    ob.setid(10);
    ob.getid();
    ob.setname("lucifer");
    ob.getname();
    ob.setm1(40);
    ob.getm1();
    ob.setm2(50);
    ob.getm2();
    ob.showid();
    ob.showresult();
    ob.avg();

    return 0;
}