#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int main()
{
    char input[1000];
    cin.getline(input, 1000, '$');
    cout << input << endl;
    int alpha = 0, digit = 0, whitespace = 0, symb = 0;
    /// itrate array
    for (int i = 0; input[i] != '\0'; i++)
    {
        char ch = input[i];
        if (isalpha(ch))
        {
            alpha++;
        }
        else if (isspace(ch))
        {
            whitespace++;
        }
        else if (isdigit(ch))
        {
            digit++;
        }
    }
    // after the loop
    cout << "aplha" << alpha << endl;
    cout << "digit" << digit << endl;
    cout << "whitespaces" << whitespace << endl;
    symb = strlen(input) - alpha - digit - whitespace;
    cout << "special symbol" << symb << endl;
    return 0;
}
