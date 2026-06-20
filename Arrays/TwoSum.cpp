// TwoSum
//TC: O(n) average case ✅
//SC: O(n) ✅

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
    int target;
    cin>>target;
    unordered_map<int,int>mp;

    for(int i=0;i<arr.size();i++){
        if(mp.find(target-arr[i])!=mp.end()){
            cout<<i<<" "<<mp[target-arr[i]];
            break;
        }
        mp[arr[i]] = i;
    }

    return 0;
}