#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char alpha[15], special[15], arr[30];
    int i, j = 0;
    string name;
    cout << "enter string:";
    cin >> name;
    for (char x : name)
    {
        if (x >= 97 && x <= 122)
        {
            alpha[i] = x;
            i++;
        }
        else
        {
            special[j] = x;
            j++;
        }
    }
    //cout << alpha << endl;
    //cout << special << endl;
    strcpy(arr,alpha);
    strcat(arr,special);
    cout<<arr<<endl;
    return 0;
}