#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 1, 1, 2, 3, 4, 1, 2, 3, 4, 5, 6, 1};

    map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        mp[arr[i]]++;
    }

    for (auto x : mp)
    {
        cout << x.first << "->" << x.second << '\n';
    }

    return 0;
}