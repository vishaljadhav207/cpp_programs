#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 2, 3, 4};
    cout << arr << endl;

    cout << &arr << endl;
    cout << arr + 1 << endl;

    // pointer to 0th of the array
    int *p1 = arr;
    cout<<p1<<endl;
    cout << (*p1) << endl;
    // pointing to 2nd is
    *p1++;
    cout << (*p1);
    // pointer to entire array
    int(*ptr)[10]; // pointer to int array contain 5 element
    ptr = &arr;

    cout << "pointer to array" << ptr << endl;
    //dereferencing the pointer to array
    cout<<(*p1)<<endl;//arr[0]
    cout<<(*ptr)<<endl;//arr

}
