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
        id=x;
    }
    int getid()
    {
        return id;
    }
    void setname(string x)
    {
        name=x;
    }
    string getname()
    {
        return name;
    }
};
class marks:public student
{
    private:
    int m1,m2;
    public:
    void setm1(int x)
    {
        m1=x;
    }
    int getm1()
    {
        return m1;
    }
     void setm2(int x)
    {
        m2=x;
    }
    int getm2()
    {
        return m2;
    }
    void showresult()
    {
        cout<<"personal information\n"<<getid()<<"\t" <<getname()<<"\t"<<m1<<"\t"<<m2<<"\t"<<endl;
    }
};
int main()
{
    marks ob;
    ob.setid(10);
    ob.getid();
    ob.setname("lucifer");
     ob.getname();
    ob.setm1(46);
    ob.getm1();
    ob.setm2(50);
    ob.getm2();
    ob.showresult();
    return 0;





}