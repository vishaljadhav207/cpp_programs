#include <iostream>
using namespace std;
//pass by value
void applytax(float & income)
{
    float tax = 0.10;
    income = income - income*tax;
}
int main()

{
    float income;
    cin>>income;
    applytax(income);
    cout<<income<<endl;
    // return 0;

}