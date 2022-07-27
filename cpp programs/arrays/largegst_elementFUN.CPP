#include<iostream>
using namespace std;
int large(int arr[],int n)
{
    int res=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[0]<arr[i])
        res=arr[i];
     
    }
    return res;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    
    cout<<large(arr,n);
    return 0;

}