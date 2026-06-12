// count digit
#include <bits/stdc++.h>
using namespace std;

void using_loop(int num)
{
    int count = 0;
    while (num)
    {
        count++;
        num /= 10;
    }
    cout << "Using loop : " << count << '\n';
}

void using_formula(int num)
{
    int count = (int)log10(num) + 1;
    cout << "Using formula : " << count << '\n';
}

int main()
{
    // Two ways to count digit:
    // 1.Using loop with O(log10(n)) time complexity
    // 2.Using log formula = log10(n)+1 for number n O(1) time complexity
    int num;
    cin >> num;
    if (num == 0)
        cout << "Only one digit" << '\n';
    else
    {
        using_loop(num);
        using_formula(num);
    }
}