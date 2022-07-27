#include <iostream>
using namespace std;
void accept2darray(int (*ptr)[4]){
    cout<<ptr<<endl;
    cout<<ptr+1<<endl;
    int i=1;
    int j=2;
    cout<<*(*(ptr+i)+j)<<endl;//both are same
    cout<<ptr[i][j]<<endl;//same

}
void accept2darrayanotherway(int arr[][4]){
    cout<<arr<<endl;
    cout<<arr+1<<endl;
    int i=1;
    int j=2;
     cout<<*(*(arr+i)+j)<<endl;//both are same
    cout<<arr[i][j]<<endl;
    
}
void print2Darray(int arr[][4],int row,int col){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}
int main()
{
    int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
   cout << "arr" << arr << endl;
    cout << "addr of 0,0 " << &arr[0][0] << endl;
    cout << "addr of 0,1 " << &arr[0][1] << endl;

    cout << arr + 1 << endl;
      cout<<"addr of 1,0 "<<&arr[1][0]<<endl;
      accept2darray(arr);
    print2Darray(arr,3,4);
    return 0;
}