#include <iostream>
using namespace std;

bool isPalindrome(string s, int i, int j)
{
    if (i > j){
        return true;
    }

    if (s[i] != s[j]){
        return false;
    }

    else{
        isPalindrome(s, ++i, --j);
    }
}

int main()
{
    string s = "BABCBAB";
    if (isPalindrome(s, 0, s.length() - 1))
    {
        cout << s << " is Palindrome." << endl;
    }
    else
    {
        cout << s << " is not Palindrome." << endl;
    }

    return 0;
}