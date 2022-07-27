#include<iostream>
using namespace std;
class test
{
    private:
    int *arr;
    int len;
    public:
    test(int n)
    {
        len =n;
        arr=new int[len];
        cout<<"enter array for"<<len<<endl;
        for(int i=0;i<len;i++)
        {
            cin>>arr[i];
            //cin>>*(arr+i)<<;//we can also use
        }
      
    }
    void show()
    {
        cout<<"#################################\n";
       for(int i=0;i<len;i++)
       {
           cout<<arr[i]<<endl;
          // cout<<*(arr+i)<<endl;
       }
       cout<<"###############################\n";
    }
  //  destructor
  ~test()
  {
      cout<<"destructor called for"<<this<<endl;
      delete(arr);
  }
  };
  int main()
  {
      test t1(3);
      test t2(4);
      t1.show();
      t2.show();
      return 0;
  }