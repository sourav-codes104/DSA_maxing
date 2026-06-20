// Find the unique element
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

    int single = 0;
    for(int i=0; i<arr.size(); i++){
        single^=arr[i];
    }
    cout<<single<<"\n";
    return 0;
}