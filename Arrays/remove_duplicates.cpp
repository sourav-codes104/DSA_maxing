// Problem: Remove Duplicates from Sorted Array
//
// Understanding:
// Given a sorted array, remove duplicates in-place such that each unique
// element appears only once. Return the number of unique elements.
//
// Example:
// Input:  [1,1,2,2,3,3,3,4]
// Output: k = 4
// Array after modification: [1,2,3,4,...]
//
// Approach (Two Pointers):
// 1. Keep pointer i at the position of the last unique element.
// 2. Traverse array using pointer j from index 1.
// 3. Whenever arr[j] != arr[i], a new unique element is found.
// 4. Increment i and place arr[j] at arr[i].
// 5. After traversal, unique elements occupy indices [0...i].
//
// Key Points:
// - Array must be sorted.
// - In-place solution.
// - Relative order of unique elements remains unchanged.
//
// Dry Run:
// arr = [1,1,2,2,3]
//
// i = 0
//
// j = 1 -> arr[1] == arr[0] -> skip
// j = 2 -> arr[2] != arr[0] -> i=1, arr[1]=2
// arr = [1,2,2,2,3]
//
// j = 3 -> arr[3] == arr[1] -> skip
//
// j = 4 -> arr[4] != arr[1] -> i=2, arr[2]=3
// arr = [1,2,3,2,3]
//
// Unique count = i + 1 = 3
//
// Time Complexity:
// O(n)
//
// Space Complexity:
// O(1)
//
// Edge Cases:
// 1. Empty array -> return 0
// 2. Single element -> return 1
// 3. All elements same -> return 1
// 4. No duplicates -> return n
//
// Test Cases:
//
// Input: [1,1,2]
// Output: 2
//
// Input: [1,1,1,1]
// Output: 1
//
// Input: [1,2,3,4]
// Output: 4
//
// Input: [5]
// Output: 1
//
// Input: []
// Output: 0

#include <bits/stdc++.h>
using namespace std;

int remove_Duplicates(vector<int> &arr)
{
    int i = 0;
    int j = 1;

    while(j <arr.size()){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
        j++;
    }
    return i+1;
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

    int ans = remove_Duplicates(arr);
    cout << ans << '\n';
    return 0;
}