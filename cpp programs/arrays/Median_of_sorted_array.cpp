#include <iostream>
#include <algorithm>

using namespace std;
int Median(int arr[], int n)
{
    int med;
    //sorting algo
    std::sort(arr,arr+n);
    //calculate median for odd arr
    med=arr[(n/2)];
    //array even calculate
    if(n%2==0)
    {
        //if evn arr get nxt no in arr and /by 2;
        med=(med+arr[n/2-1])/2;
    }
    return med;
    }
int main()
{
    int arr[] = {7, 5, 8, 7, 2, 1};
    int n = sizeof(arr) / sizeof(int);
    cout<<Median(arr,n)<<endl;
    return 0;
   
}