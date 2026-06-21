// Rearrange Elements by Sign
// Time Complexity: O(n)
// Space Complexity: O(n)

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

    vector<int> posArray;
    vector<int> negArray;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            posArray.push_back(arr[i]);
        }
        else
        {
            negArray.push_back(arr[i]);
        }
    }

    arr.clear();
    arr.resize(size);
    if (posArray.size() > negArray.size())
    {
        for (int i = 0; i < negArray.size(); i++)
        {
            arr[i * 2] = posArray[i];
            arr[(i * 2) + 1] = negArray[i];
        }
        int index = negArray.size() * 2;
        for (int i = negArray.size(); i < posArray.size(); i++)
        {
            arr[index++] = posArray[i];
        }
    }
    else
    {
        for (int i = 0; i < posArray.size(); i++)
        {
            arr[i * 2] = posArray[i];
            arr[(i * 2) + 1] = negArray[i];
        }
        int index = posArray.size() * 2;
        for (int i = posArray.size(); i < negArray.size(); i++)
        {
            arr[index++] = negArray[i];
        }
    }

    for(auto x :arr){
        cout<<x<<" ";
    }
    cout<<'\n';

    return 0;
}