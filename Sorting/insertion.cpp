// Insertion Sort
// Time Complexity : O(n^2)

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

    // Insertion Sort
    for (int i = 1; i < arr.size(); i++)
    {
        int j = i - 1;
        int current_element = arr[i];
        while (j >= 0 && arr[j] > current_element)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current_element;
    }
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}