#include <iostream>
using namespace std;

bool comparepassword(char *password, char *expectedpassword)
{
    int ind = 0;
    while (password[ind] != '\0')
    {
        if (password[ind] != expectedpassword[ind])
        {
            return false;
        }
        ind++;
    }
    return true;
}
int main()
{
    // equality chracter by character
    char *expectedpassword = "hack1010"; // read only memory
    char password[100];                  // array that is started in your stack[updataed]
    cin >> password;
    if (comparepassword(password, expectedpassword))
    {
        cout << "correct password" << endl;
    }
    else
    {
        cout << "incorrct password";
    }
    return 0;
}