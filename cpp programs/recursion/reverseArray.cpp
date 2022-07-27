#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void reversearray(int l,int r,vector<int>&arr)
{
    //base condition--1
    if(l>=r)return;
    //do small work--2
    swap(arr[l],arr[r]);
    //ask recursion to handle remaining task
    reversearray(l+1,r-1,arr);
}
void reversearray(vector<int> &arr,int m)//problem
{
    reversearray(m+1,arr.size()-1,arr);
}
int main()
{
    int arr;
    cin>>arr;
    cout<<reversearray(l,arr);
    return 0;

}


