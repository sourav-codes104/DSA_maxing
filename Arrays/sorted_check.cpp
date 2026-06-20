//Check if array is sorted
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

bool sort_Check(vector<int>&arr){
    for (int i = 0; i < arr.size()-1; i++)
    {
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
    
}

int main() {

    int size;
    cin >> size;
    vector<int> arr;
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }
    if(sort_Check(arr)){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is unsorted";
    }


    return 0;
}