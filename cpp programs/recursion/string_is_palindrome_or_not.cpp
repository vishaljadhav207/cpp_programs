#include<iostream>
using namespace std;
bool palindrome(int l,int r,string &s)
{
    if(l>=r) return true;
    if(s[l]!=s[r])return false;
    return palindrome(l+1,r-1,s);
}
bool palindrome(string &s)
{
   return palindrome(0,s.size()-1,s);
}
 int main()
{
    string s;
    cin>>s;
    if(palindrome(s))
    cout<<"yes it is palindrome";
    else{
        cout<<"no it is not palindrome";
    }

}