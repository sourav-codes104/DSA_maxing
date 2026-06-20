//Intersection of two sorted arrays
//TC: O(m + n)
//SC: O(m + n) (including vectors a and b)
//Auxiliary SC: O(m) (excluding input storage)

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

    unordered_set<int> st(a.begin(), a.end());
    vector<int> ans;
    for (auto x : b)
    {
        if (st.find(x) != st.end())
        {
            ans.push_back(x);
            st.erase(x);
        }
    }
    for (auto x : ans)
    {
        cout << x << " ";
    }
    cout << '\n';

    return 0;
}