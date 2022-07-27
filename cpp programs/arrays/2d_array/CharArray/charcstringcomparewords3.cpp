#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    //c-style string
    char word1[100];
    char word2[100];
    cin>>word1>>word2;
    int res=strcmp(word1,word2);//compares words
    if(res==0)
    {
        cout<<"word are equal ";
    }
    else if(res>0)
    {
        cout<<word1<<" appears after "<<word2<<" in dict";
    }
    else{
        cout<<"words are not equal";
    }

return 0;
}