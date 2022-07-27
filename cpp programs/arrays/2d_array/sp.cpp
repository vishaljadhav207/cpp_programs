 #include<iostream>
 using namespace std;
 void sprint(int arr[][10],int n,int m)
 {
     int startrow=0;
     int endrow=n-1;
     int startcol=0;
     int endcol=m-1;

     while(startrow<=endcol && startcol<=endcol)
     {
         for(int col=startcol;col<=endcol;col++)
         {
             cout<<arr[startcol][col];
         }  

         for(int row=startrow+1;row<=endrow;row++)
         {
             cout<<arr[row][endcol];
         }
         for(int col=endrow-1;col>=startrow;col--)
         {
             if(startrow==endrow)
             {
                 break;
             }
             cout<<arr[endrow][col];
         }
         for(int row=endrow-1;row>=startrow;row--)
         {
             if(startcol==endcol)
             {
                 break;
             }
             cout<<arr[row][startcol];
         }
         startrow++;
         startcol++;
         endrow--;
         endcol--;
     }


 }
 int main()
 {
      int arr[][10] = {{1, 2, 3, 4},
                     {12, 13, 14, 5},
                     {11, 16, 15, 6},
                     {10, 9, 8, 7}};
    int n = 4, m = 4;
    sprint(arr, n, m);
    return 0;
 }