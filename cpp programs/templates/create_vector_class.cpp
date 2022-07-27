#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    cout<<v1.size()<<endl;
    // add item to vector
    v1.push_back(100);
    v1.push_back(200);
    v1.push_back(300);
    v1.push_back(400);
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1.at(i)<<endl;
    }
    vector<string> v2;
    v2.push_back("a");
    v2.push_back("b");
    v2.push_back("c");
     for(int i=0;i<v1.size();i++)
    {
        cout<<v2.at(i)<<endl;
    }
    
    return 0;
}