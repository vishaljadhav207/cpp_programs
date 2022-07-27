#include <iostream>
using namespace std;
class Person
{
private:
    string name;

public:
    Person()
    {
        cout << "Enter Name: " << endl;
        getline(cin, name);
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

public:
    student()
    {
        cout << "Enter id: " << endl;
        cin >> id;
    }
    int getid()
    {
        return id;
    }
};
class teacher : public student
{
private:
    int salary;
    string sub;

public:
    teacher()
    {
        cout << "enter salary:\n";
        cin >> salary;
        cout << "subject:\n";
        cin >> sub;
    }
    int getsalary()
    {
        return salary;
    }

    string getsubject()
    {
        return sub;
    }
};
class collegestudent : public teacher
{
private:
    int year;
    string major;

public:
    collegestudent()
    {
        cout << "enter year of studing:\n";
        cin >> year;
        cout<<"which major:\n";
        cin>>major;
    }
    
        int getyear()
        {
          return year;
        }
        string getmajor()
        {
            return major;
        }
    
};
int main()
{
    collegestudent ob;
    ob.getname();
    ob.getid();
    ob.getsalary();
    ob.getsubject();
    ob.getyear();
    ob.getmajor();
    return 0;
}
