//Print name 5 times
// TC: O(n)
// SC: O(n) (recursive call stack)
#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    if (n == 0)
        return;
    cout << "Sourav Singh" << '\n';
    print(n-1);
}

int main()
{

    int n;
    cin >> n;

    print(n);

    return 0;
}