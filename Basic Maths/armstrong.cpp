// Armstrong Number Check
//Time Complexity : O(log10(n))
//Space Complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

int armstrong_num(int num)
{
    int count = 0;
    int temp = num;
    while (temp)
    {
        count++;
        temp /= 10;
    }
    int ans = 0;
    while (num)
    {
        ans += round(pow((num % 10), count));
        num /= 10;
    }

    return ans;
}

int main()
{
    int num;
    cin >> num;
    int ans = armstrong_num(num);

    if (num == ans)
        cout << num << "-> is an armstrong number" << '\n';
    else
    {
        cout << "not an armstrong" << '\n';
    }
    return 0;
}