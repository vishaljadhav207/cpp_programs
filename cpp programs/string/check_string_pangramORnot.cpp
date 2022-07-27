// // C++ Program to check if the given
// // string is a pangram or not

// #include <bits/stdc++.h>
// using namespace std;

// // Returns true if the string is
// // pangram else false
// bool checkPangram(string& str)
// {
// 	// Create a hash table to mark
// 	// the characters
// 	// present in the string
// 	vector<bool> mark(26, false);

// 	// For indexing in mark[]
// 	int index;

// 	// Traverse all characters
// 	for (int i = 0; i < str.length(); i++) {

// 		// If uppercase character,
// 		// subtract 'A' to find index.
// 		if ('A' <= str[i] && str[i] <= 'Z')
// 			index = str[i] - 'A';

// 		// If lowercase character,
// 		// subtract 'a' to find index.
// 		else if ('a' <= str[i]
// 				&& str[i] <= 'z')
// 			index = str[i] - 'a';

// 		// If this character is not
// 		// an alphabet, skip to next one.
// 		else
// 			continue;

// 		mark[index] = true;
// 	}

// 	// Return false
// 	// if any character is unmarked
// 	for (int i = 0; i <= 25; i++)
// 		if (mark[i] == false)
// 			return (false);

// 	// If all characters were present
// 	return (true);
// }

// // Driver Code
// int main()
// {
// 	string str = "We promptly judged"
// 				" antique ivory"
// 				" buckles for the next prize";

// 	if (checkPangram(str) == true)
// 		printf("Yes");
// 	else
// 		printf("No");

// 	return (0);
// }

// C++ Program to check whether
// a string pangram or not using STL

#include <bits/stdc++.h>
using namespace std;

// Function to return given string
// str is pangrams yes or no
string pangrams(string s)
{

    // Initialization of count
    int count = 0;

    // Convert each letter into
    // uppercase to avoid counting
    // of both uppercase and
    // lowercase as different letters
    transform(s.begin(),
              s.end(),
              s.begin(),
              ::toupper);

    // Sort the string
    sort(s.begin(), s.end());

    // Count distinct alphabets
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != s[i + 1])
            count++;
    }

    // If count is 27 then the string
    // contains all the alphabets
    // including space as a
    // distinct character
    if (count == 27)
        return "Yes";

    else
        return "No";
}

// Driver code
int main()
{
    // Given string str
    string str = "We promptly "
                 "judged antique"
                 "ivory buckles for "
                 "the next prize";

    // Function Call
    cout << pangrams(str);

    return 0;
}
