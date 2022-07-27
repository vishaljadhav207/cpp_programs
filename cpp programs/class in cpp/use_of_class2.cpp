#include<iostream>
using namespace std;
class phone
{
    char operatingsystem[30];
    int ram;
public:
    void getdata(void);
    void display(void);
};
void phone::getdata(void)
{
    cout<<"enter operating system:";
    cin>>operatingsystem;
    cout<<"enter ram:";
    cin>>ram;
}
void phone::display(void)
{
    cout<<"\toperating system:"<<operatingsystem;
    cout<<"\tram:"<<ram;
}
int main()
{


phone p;
p.getdata();
p.display();
return 0;
}
