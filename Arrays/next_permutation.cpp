//Next Permutation
//TC: total: O(3n) ⇒ O(n)
//SC: O(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int size;
    cin >> size;
    vector<int> arr;
    int idx = -1;
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    for (int i = size - 1; i > 0; i--)
    {
        if (arr[i] > arr[i - 1])
        {
            idx = i - 1;
            break;
        }
    }
    if (idx != -1)
    {
        for (int i = size - 1; i >= 0; i--)
        {
            if (arr[i] > arr[idx])
            {
                swap(arr[i], arr[idx]);
                break;
            }
        }
    }
    reverse(arr.begin() + idx + 1, arr.end());
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}