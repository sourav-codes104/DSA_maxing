//Selection Sort
//Time Complexity : O(n^2)

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

    // Selection Sort
    for (int i = 0; i < arr.size(); i++)
    {
        int min_index = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }
    for (auto x : arr)
    {
        cout << x << " " ;
    }
    return 0;
}