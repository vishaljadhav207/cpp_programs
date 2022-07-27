#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1 = {10, 20, 30, 40};
    cout << v1.size() << endl;
    v1.push_back(50);
    v1.push_back(60);
    cout << v1.size() << endl;
    // display items from vector
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << endl;
    }
    // update vector object
    cout << "after update:" << endl;
    v1.at(0) = 123;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << endl;
    }
    // remove
    v1.pop_back();
    v1.pop_back();
    cout << "after delete:" << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << endl;
    }
    return 0;
}