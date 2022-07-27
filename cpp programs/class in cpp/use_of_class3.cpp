#include <iostream>
using namespace std;
class account
{
    private:
    //attribute of objects
    int id;
    string name;
    int balance;
    public:
    //actions
    void createaccount()
    {
        cout<<"enter id:"<<endl;
        cin>>id;
        cout<<"enter name:"<<endl;
        cin>>name;
        balance=0;
    }
    void depositamount()
    {
        int amt;
        cout<<"enter amount to deposite\n";
        cin >>amt;
        balance=balance+amt;
        cout<<"balance after deposite"<<balance<<endl;
      }
    void withdraw()
    {
       int amt;
        cout<<"enter amount to withdraw\n";
        cin >>amt;
        balance=balance-amt;
        cout<<"balance after withdraw"<<balance<<endl;
    }
    void printf()
    {
        cout<<id<<"\t"<<name<<"\n"<<balance<<endl;
    }

};
int main()
{
account ob1;
ob1.createaccount();
ob1.depositamount();
ob1.withdraw();
//create 2nd object
account ob2;
ob2.createaccount();
ob2.depositamount();
ob2.withdraw();
cout<<"\nprinting customer date\n";
ob1.printf();
ob2.printf();
return 0;
}

