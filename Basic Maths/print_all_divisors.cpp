//Print all divisors
//Time Complexity : O(√n)
//Space Complexity : O(1) 

#include <bits/stdc++.h>
using namespace std;

void print_all_divisor(int num)
{
    for (int i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";

            if (num / i != i)
            {
                cout << num/i << " ";
            }
        }
    }
}

int main()
{

    int num;
    cin >> num;
    print_all_divisor(num);

    return 0;
}