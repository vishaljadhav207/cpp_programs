#include <iostream>
#include <string>
using namespace std;
string uncomment(string s)
{
    int ind1 = s.find("/*");
    int ind2 = s.find("*/");
    cout << ind1 << endl;
    cout << ind2 << endl;
    int start = ind1 + 2;
    int len = ind2 - start;
    return s.substr(start, len);
}
int main()
{
    string s = "/*hello world*/";
    cout << uncomment(s) << endl;
    return 0;
}