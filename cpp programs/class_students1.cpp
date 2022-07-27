#include <iostream>
using namespace std;
class student
{
private:
    string firstname;
    string lastname;
    string major;
    int year;

public:
    void setfirstname(string n)
    {
        firstname = n;
    }
    string getfirstname()
    {
        return firstname;
    }
    void setlastname(string n)
    {
        lastname = n;
    }
    string getlastname()
    {
        return lastname;
    }
    void setmajor(string n)
    {
        major = n;
    }
    string getmajor()
    {
        return major;
    }
    void setyear(int n)
    {
        year = n;
    }
    int getyear()
    {
        return year;
    }
};
int main()
{
    student s1;
    s1.setfirstname("vj");
    s1.setlastname("jadhav");
    s1.setmajor("patil");
    s1.setyear(2002);

    cout << s1.getfirstname() << endl;
    cout << s1.getlastname() << endl;
    cout << s1.getmajor() << endl;
    cout << s1.getyear() << endl;

    return 0;
}