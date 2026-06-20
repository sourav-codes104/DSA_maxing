// Problem Statement:
// Given an integer array nums, return true if any element
// appears more than once, otherwise return false.
//
// Approach:
// Use an unordered_set.
// Traverse the array:
// - If element already exists in set -> return true.
// - Otherwise insert it into the set.
// If traversal completes -> return false.
//
// Time Complexity:
// O(n) average
//
// Space Complexity:
// O(n)
//
// Test Cases:
//
// Input:  [1,2,3,1]
// Output: true
//
// Input:  [1,2,3,4]
// Output: false
//
// Input:  [1,1,1,1]
// Output: true
//
// Input:  [5]
// Output: false
//
// Input:  []
// Output: false

#include <bits/stdc++.h>
using namespace std;

bool containsDuplicates(vector<int> &arr)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++)
    {
        if (mp.find(arr[i]) != mp.end())
        {
            return true;
        }
        mp.insert({arr[i], 1});
    }
    return false;
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

    if(containsDuplicates(arr)){
        cout<<"Array contains Duplicates value"<<'\n';
    }
    else{
        cout<<"Not contains any duplicate value";
    }

    return 0;
}