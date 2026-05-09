#include <iostream>
using namespace std;
void toLowerCase(string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = tolower(str[i]);
    }
}
void RemoveSpecialCharacter(string &str)
{
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        if (isalnum(str[i]))
        {
            result += str[i];
        }
    }
    str = result;
}
bool palindrome(string str, int start, int end)
{

    // base case
    if (start >= end)
    {
        return true;
    }
    // processing
    if (str[start] != str[end])
    {
        return false;
    }
    return palindrome(str, start + 1, end - 1);
}
bool isPalindrome(string str)
{
    toLowerCase(str);
    RemoveSpecialCharacter(str);

    int start = 0;
    int end = str.length() - 1;

    return palindrome(str, start, end);
}
int main()
{
    string str = "RACECAR";
    // int start = 0;
    // int end = str.size() - 1;
    bool ans = isPalindrome(str);
    if (ans)
    {
        cout << str << " is a palindrome" << endl;
    }
    else
    {
        cout << str << " is not a palindrome";
    }

    return 0;
}