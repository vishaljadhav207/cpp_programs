#include <iostream>//is a relation ship
using namespace std;
class Person
{
private:
    int phone;
    string name;

public:
    void setphone(int x)
    {
        phone = x;
    }
    int getphone()
    {
        return phone;
    }
    void setname(string y)
    {
        name = y;
    }
    string getname()
    {
        return name;
    }
};
class student : public Person
{
private:
    int id;
    string major;

public:
    void setid(int x)
    {
        id = x;
    }
    int getid()
    {
        return id;
    }
    void setmajor(string y)
    {
        major = y;
    }
    string getmajor()
    {
        return major;
    }
};
class teacher : public student
{
private:
    string dept;
    int salary;

public:
    void setdept(string x)
    {
        dept = x;
    }
    string getdept()
    {
        return dept;
    }
    void setsalary(int x)
    {
        salary = x;
    }
    int getsalary()
    {
        return salary;
    }
};
int main()
{
    teacher ob1;
    ob1.setphone(934623576);
    cout<<"phone:" << ob1.getphone()<<endl;
    ob1.setname("vj");
    cout <<"name:"<< ob1.getname()<<endl;
    ob1.setid(1);
    cout<<"id:" << ob1.getid()<<endl;
    ob1.setmajor("ENTC");
    cout <<"major:"<< ob1.getmajor()<<endl;
    ob1.setdept("cse");
    cout <<"dept:"<< ob1.getdept()<<endl;
    ob1.setsalary(100000);
    cout<<"salary:" << ob1.getsalary();
}
