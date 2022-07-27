#include<iostream>
using namespace std;
int main()
{
    //subarray
int arr[]={1,2,3,4,5};
int n=sizeof(arr)/sizeof(int);
  
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            //subarray i-----j
            //printing arrays
           // cout<<"i"<<i<<"---"<<"j"<<j<<endl;
           for(int k=i;k<=j;k++)
           {
            cout<<arr[k]<<",";
           }
           cout<<endl;
        }
    }

}
