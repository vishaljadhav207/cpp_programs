#include <iostream>
using namespace std;
int findmissnum(int arr[], int n)
{
    int temp;
    temp = ((n + 1) * (n + 2)) / 2;//formula 
    for (int i = 0; i < n; i++)

        temp -=  arr[i];
    return temp;
}

int main()
{
    int n;
    cout << "enter size ";
    cin >> n;
    int arr[n - 1];
    cout << "enter arr element ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int misssingnumber = findmissnum(arr, 5);
    cout << "missing no is " << misssingnumber;
    return 0;
}
