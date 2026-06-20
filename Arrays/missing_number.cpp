//Find Missing number
//TC: O(n)
//SC: O(1)

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

    int xor1 = 0, xor2 = 0;
    for(int i=0; i<=arr.size(); i++){
        xor1 = xor1^i;
    }
    for(int i=0; i<arr.size(); i++){
        xor2 = xor2^arr[i];
    }
    cout<<(xor1^xor2)<<'\n';
    return 0;
}