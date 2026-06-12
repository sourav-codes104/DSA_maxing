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

    // Hashmap
    int hash[12] = {0};
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }

    int max_freq = INT_MIN;
    int min_freq = INT_MAX;

    for (int i = 0; i < 12; i++)
    {
        if (hash[i] > 0)
        {
            max_freq = max(max_freq, hash[i]);
            min_freq = min(min_freq, hash[i]);
        }
    }
    cout<<"MAX FREQUENCY -> "<<max_freq<<'\n';
    cout<<"MIN FREQUENCY -> "<<min_freq<<'\n';

    return 0;
}