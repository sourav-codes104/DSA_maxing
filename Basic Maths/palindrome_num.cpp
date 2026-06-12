//Palindrome Check
//Time Complexity : O(log10(n))
//Space Complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

bool palindrome(int num)
{
    if(num<0)return false;
    int rev = 0;
    int temp = num;
    while (temp)
    {
        rev = (temp % 10) + rev * 10;
        temp /= 10;
    }
    if (rev == num)
        return true;
    return false;
}

int main()
{

    int num;
    cin >> num;
    if (palindrome(num))
    {
        cout << "Number is Palindrome" << '\n';
    }
    else
    {
        cout << "Number is not Palindrome" << '\n';
    }

    return 0;
}