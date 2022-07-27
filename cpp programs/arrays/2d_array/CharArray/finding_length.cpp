#include <iostream>
using namespace std;
int main()
{
    char arr[1000]; // as per problem contraints
    int n;
    cin >> n;
    cin.get();

    for (int i = 0; i < n; i++)
        cin.getline(arr, 1000, '\n');
    cout << arr << endl;
}