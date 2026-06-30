//3Sum 


#include <bits/stdc++.h>
using namespace std;


//brute force
//TC : O(n^3)
//SC : O(1)
vector<vector<int>> brute_approach(vector<int> &arr, int size)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> indexes;

    for (int i = 0; i < size - 2; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        for (int j = i + 1; j < size - 1; j++)
        {
            if (j > i + 1 && arr[j] == arr[j - 1])
                continue;
            for (int k = j + 1; k < size; k++)
            {
                if (k > j + 1 && arr[k] == arr[k - 1])
                    continue;
                int a = arr[i];
                int b = arr[j];
                int c = arr[k];
                int sum = a + b + c;
                if (sum == 0)
                {

                    indexes.push_back({a, b, c});
                }
            }
        }
    }

    return indexes;
}


//Optimal Approach
//TC : O(n^2);
//SC : O(1);
vector<vector<int>> optimal(vector<int> &arr, int size)
{
    sort(arr.begin(), arr.end());
    vector<vector<int>> indexes;

    for (int i = 0; i < size - 2; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])continue;
        int j = i+1 , k = size-1;
        while(j<k){
            int sum = arr[i]+arr[j]+arr[k];
            if(sum>0){
                k--;
            }
            else if(sum<0){
                j++;
            }
            else{
                indexes.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
                while(j < k && arr[j]==arr[j-1])j++;
                while(k > j && arr[k]==arr[k+1])k--;
            }
        }
    }
    return indexes;
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

    // vector<vector<int>> ans = brute_approach(arr, size);

     vector<vector<int>> ans = optimal(arr,size);

    for (auto x : ans)
    {
        cout << "[";
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << "]" << '\n';
    }

    return 0;
}