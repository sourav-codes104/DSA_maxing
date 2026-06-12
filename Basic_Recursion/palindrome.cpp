#include <bits/stdc++.h>
using namespace std;

bool palindrome(string &letter, int i, int j)
{
    if (i >= j)
        return true;
    if (letter[i] != letter[j])
        return false;
    return palindrome(letter, i + 1, j - 1);
}

int main()
{
    string letter;
    cin >> letter;
    int i, j;
    if (palindrome(letter, i = 0, j = letter.size() - 1))
    {
        cout << "A palindrome" << '\n';
    }
    else
    {
        cout << "Not a palindrome" << '\n';
    }
    return 0;
}