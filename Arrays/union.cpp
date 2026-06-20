//Union of two sorted arrays
//Total TC: O(m + n)
//Total SC: O(m + n)
//Auxiliary SC (excluding input arrays a and b): O(m + n) because of ans.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int m, n;
    cin >> m >> n;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < m; i++)
    {
        int num;
        cin >> num;
        a.push_back(num);
    }
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        b.push_back(num);
    }
    // for(auto x :a){
    //     cout<<x<<" ";
    // }
    // cout<<'\n';
    // for(auto x :b){
    //     cout<<x<<" ";
    // }

    vector<int> ans;
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            if (ans.empty() || ans.back() != a[i])
            {
                ans.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (ans.empty() || ans.back() != b[j])
            {
                ans.push_back(b[j]);
            }
            j++;
        }
    }
    while (i < m)
    {
        if (ans.empty() || ans.back() != a[i])
        {
            ans.push_back(a[i]);
        }
        i++;
    }
    while (j < n)
    {
        if (ans.empty() || ans.back() != b[j])
        {
            ans.push_back(b[j]);
        }
        j++;
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << '\n';

    return 0;
}