//Prime Check
//Time Complexity : O(√n)
//Spcae Complexity : O(1)


#include <bits/stdc++.h>
using namespace std;

bool prime_check(int num)
{
    if (num<=1)
    {
        return false;
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int num;
    cin >> num;
    if (prime_check(num))
    {
        cout << num << "-> is a prime number " << '\n';
    }
    else
    {
        cout << num << "-> is not a prime number " << '\n';
    }

    return 0;
}