// Linear Search

// Time Complexity:
// Best Case: O(1)
// Average Case: O(n)
// Worst Case: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> &arr, int target)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

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
    int target;
    cin >> target;

    int ans = linearSearch(arr, target);
    if (ans != -1)
    {
        cout << "Target " << target << " found at " << ans << " index" << '\n';
    }
    else
    {
        cout << "Target Not found" << '\n';
    }

    return 0;
}