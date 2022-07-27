#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int *arr;
    int size;
    cout<<"enter the size of integer array:";
    cin>>size;
    cout<<"creating an array of size"<<size<<"..";
    arr=new int[size];
    cout<<"\ndynamic memory allocation for array arr is succesfull.";
    delete arr;
    getch();
}