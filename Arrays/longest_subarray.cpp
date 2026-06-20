// Longest Subarray sum equals k
// TC: O(n) (with unordered_map)
// SC: O(n)

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
    int k;
    cin >> k;

    map<int, int> mp;
    mp.insert({0, -1});
    int length = 0;
    int prefix_sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        prefix_sum += arr[i];
        if (mp.find(prefix_sum - k) != mp.end())
        {
            length = max(length, i-mp.find(prefix_sum - k)->second);
        }
    }
    cout<<length<<"\n";
    return 0;
}