#include <bits/stdc++.h>
using namespace std;

// Optimal version
// Time Complexity:O(n)
// Space Complexity: O(1)
void rotateArray_right(vector<int> &arr, int d)
{
    int n = arr.size();
    d = d % n;
    reverse(arr.begin(),arr.end());
    reverse(arr.begin()+d,arr.end());
    reverse(arr.begin(),arr.begin()+d);
}

// Brute-Force
// Time Complexity:O(n)
// Space Complexity: O(d)
void rotateArrayRight(vector<int> &arr, int d)
{
    int n = arr.size();
    d = d % n;
    vector<int> temp;
    for (int i = 0; i < d; i++)
    {
        temp.push_back(arr[n - d + i]);
    }

    for (int i = n - 1; i >= d; i--)
    {
        arr[i] = arr[i - d];
    }

    for (int i = 0; i < d; i++)
    {
        arr[i] = temp[i];
    }
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

    rotateArrayRight(arr, d);
    rotateArray_right(arr,d);

    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}