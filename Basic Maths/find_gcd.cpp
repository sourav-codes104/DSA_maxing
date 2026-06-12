//GCD of two numbers
// Time Complexity : O(log(min(a, b)))
// Space Complexity : O(1)

#include <bits/stdc++.h>
using namespace std;

void gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if (a == 0)
    {
        cout << "GCD -> " << b << '\n';
    }
    else
    {
        cout << "GCD -> " << a << '\n';
    }
}

int main()
{

    int a, b;
    cin >> a >> b;
    gcd(a, b);

    return 0;
}