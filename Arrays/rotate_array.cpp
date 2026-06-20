// Problem Statement:
// Given an array of size n and an integer d,
// rotate the array to the left by d positions.

// Time Complexity:
// O(n)
// Space Complexity:
// O(d)

#include <bits/stdc++.h>
using namespace std;

// Brute-Force
void rotate_Arrayleft(vector<int> &arr, int d)
{
    int n = arr.size();
    d = d % n;
    vector<int> temp;

    for (int i = 0; i < d; i++)
    {
        temp.push_back(arr[i]);
    }

    for (int i = 0; i < n - d; i++)
    {
        arr[i] = arr[i + d];
    }

    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}

// Optimal Approach
// Approach:Reversal Algorithm
// Time Complexity:O(n)
// Space Complexity:O(1)

void rotateArrayLeft(vector<int> &arr, int d)
{
    int n = arr.size();
    d = d % n;
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
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
    int d;
    cin >> d;
    // rotate_Arrayleft(arr, d);

    // for (auto x : arr)
    // {
    //     cout << x << " ";
    // }
    // cout << '\n';
    rotateArrayLeft(arr, d);

    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}