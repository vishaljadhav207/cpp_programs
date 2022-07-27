#include<iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>v1={10,20,30,40};
    cout<<v1.size()<<endl;
    cout<<"Before remove:"<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1.at(i)<<endl;
    }
    v1.erase(v1.begin()+2);//specific index
    cout<<"After remove:"<<endl;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1.at(i)<<endl;
    }
    return 0;
}