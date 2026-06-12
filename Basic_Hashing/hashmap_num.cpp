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

    //Hashmap
    int hash[12] = {0};
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]]++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        cout << n << "->" << hash[n]<<'\n';
    }

    return 0;
}