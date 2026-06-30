// 4Sum

#include <bits/stdc++.h>
using namespace std;

// brute force
// TC : O(n^4)
// SC : O(1)
vector<vector<int>> brute_approach(vector<int> &arr, int size, int target)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> indexes;

    for (int i = 0; i < size - 3; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        for (int j = i + 1; j < size - 2; j++)
        {
            if (j > i + 1 && arr[j] == arr[j - 1])
                continue;
            for (int k = j + 1; k < size - 1; k++)
            {
                if (k > j + 1 && arr[k] == arr[k - 1])
                    continue;
                for (int l = k + 1; l < size; l++)
                {
                    if (l > k + 1 && arr[l] == arr[l - 1])
                        continue;
                    int a = arr[i];
                    int b = arr[j];
                    int c = arr[k];
                    int d = arr[l];
                    int sum = a + b + c + d;
                    if (sum == target)
                    {

                        indexes.push_back({a, b, c, d});
                    }
                }
            }
        }
    }
    return indexes;
}

// Optimal Approach
// TC : O(n^3);
// SC : O(1);
vector<vector<int>> optimal(vector<int> &arr, int size, int target)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> indexes;

    for (int i = 0; i < size - 3; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        for (int j = i + 1; j < size - 2; j++)
        {
            if (j > i + 1 && arr[j] == arr[j - 1])
                continue;

            int k = j + 1, l = size - 1;
            while (k < l)
            {
                int sum = arr[i] + arr[j] + arr[k] + arr[l];
                if (sum > target)
                {
                    l--;
                }
                else if (sum < target)
                {
                    k++;
                }
                else
                {
                    indexes.push_back({arr[i], arr[j], arr[k], arr[l]});
                    k++;
                    l--;
                    while (l > k && arr[k] == arr[k - 1])
                        k++;
                    while (l > k && arr[l] == arr[l + 1])
                        l--;
                }
            }
        }
    }
    return indexes;
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
    vector<vector<int>> ans = brute_approach(arr, size ,target);

    // vector<vector<int>> ans = optimal(arr, size, target);

    for (auto x : ans)
    {
        cout << "[";
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << "]" << '\n';
    }

    return 0;
}