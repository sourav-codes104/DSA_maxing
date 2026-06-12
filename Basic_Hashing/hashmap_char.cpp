#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin >> size;

    vector<char> arr;
    for (int i = 0; i < size; i++)
    {
        char letter;
        cin >> letter;
        arr.push_back(letter);
    }

    // Hashmap
    int hash[26] = {0};
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]-'a']++;
    }

    int q;
    cin >> q;
    while (q--)
    {
        char n;
        cin >> n;
        cout << n << "->" << hash[n-'a'] << '\n';
    }

    return 0;
}