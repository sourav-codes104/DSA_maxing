//Merge Overlapping intervals
//TC : O(nlogn);
//SC : O(m*n);


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cin >> row >> col;
    vector<vector<int>> arr(row, vector<int>(col, 0));

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // merge interval

    sort(arr.begin(), arr.end());
    int n = arr.size();
    vector<vector<int>> ans;
    ans.push_back(arr[0]);
    for (int i = 1; i < n; i++)
    {
        if (ans.back()[1] >= arr[i][0])
        {
            ans.back()[1] = max(arr[i][1], ans.back()[1]);
        }
        else
        {
            ans.push_back(arr[i]);
        }
    }

    for(auto row : ans){
        cout<<"[";
        for(auto col : row){
            cout<<col<<" ";
        }
        cout<<"]"<<", ";
    }

    return 0;
}