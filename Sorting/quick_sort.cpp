// Best/Average Time Complexity : O(n log n)
// Worst Time Complexity : O(n²)
// Space Complexity : O(log n)  // average recursion stack
// Space Complexity : O(n)      // worst case recursion stack

#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high - 1)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quicksort(vector<int> &arr, int low, int high)
{
    if (low >= high)
        return;
    int index = partition(arr, low, high);
    quicksort(arr, low, index - 1);
    quicksort(arr, index + 1, high);
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
    int low = 0, high = size - 1;
    quicksort(arr, low, high);

    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}