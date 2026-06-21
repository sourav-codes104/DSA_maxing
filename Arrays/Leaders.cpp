// Leaders in Array
// TC:: O(n)
// SC: O(k) where k = number of leaders (answer vector)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;
    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    int n = arr.size();
    int lead = arr[n - 1];
    vector<int> ans;
    ans.push_back(lead);

    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= lead)
        {
            ans.push_back(arr[i]);
            lead = arr[i];
        }
    }

    reverse(ans.begin(), ans.end());
    for (auto x : ans)
        cout << x << " ";
    cout << '\n';

    return 0;
}