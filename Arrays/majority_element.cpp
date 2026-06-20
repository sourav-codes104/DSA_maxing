// Moore's Voting Algorithm (Majority Element > n/2)
// TC: O(n)
// SC: O(1)

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

    int candidate = 0, count = 0;
    for (int i = 0; i < size; i++)
    {
        if (count == 0)
        {
            candidate = arr[i];
            count = 1;
        }
        else if (arr[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == candidate)
            count++;
    }

    count > (size / 2) ? cout << candidate << "\n" : cout << -1 << '\n';

    return 0;
}