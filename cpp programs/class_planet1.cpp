/*#include <iostream>
using namespace std;
class planet
{
private:
    string name;
    double distance_fromthesun;
    double gravity;

public:
    planet()//constructor without arguments
    {
        name = "jupitar";
        distance_fromthesun = 635.53;
        gravity = 5664.6;
    }
     
    void info()
    {
        cout<<name<<"\t"<<distance_fromthesun<<"\t"<<gravity<<endl;
    }
};
int main()
{
    planet p1;
    p1.info();
    
}
==================================================================*/
#include <iostream>
using namespace std;
class planet
{
private:
    string name;
    double distance_fromthesun;
    double gravity;

public:
    planet()//constructor without arguments
    {
        name = "jupitar";
        distance_fromthesun = 635.53;
        gravity = 5664.6;
    }
    planet(string a,double b,double c)
     {
          name =a ;
        distance_fromthesun =b ;
        gravity = c;
     }
    void info()
    {
        cout<<name<<"\t"<<distance_fromthesun<<"\t"<<gravity<<endl;
    }
};
int main()
{
    planet p1;
    p1.info();
    
}
