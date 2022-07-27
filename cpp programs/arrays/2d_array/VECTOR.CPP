#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // DEMO VECTOR
    // vector<int> arr = {1, 2, 3, 4, 5};
    //fill constructor
    vector<int> arr(10,7);
    // pop back
    arr.pop_back();
    arr.push_back(16);
    /// print all the element
    // for (int i = 0; i<arr.size(); i++)
    // {
    //     cout << arr[i] << endl;
    // }
    for(int x:arr){
        cout<<x<<",";
    }
    // //size of the vector (no of element)
    // cout<<arr.size()<<endl;
    // //capacity of vector
    // cout<<arr.capacity()<<endl;
}