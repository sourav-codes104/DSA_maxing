// MAX Consecutive 1's
// Time Complexity: O(n)
// Space Complexity: O(1)
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

    int curr_length = 0, max_length = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==1){
            curr_length++;
            max_length = max(max_length,curr_length);
        }
        else{
            curr_length=0;
        }
    }
    cout<<max_length<<"\n";

    return 0;
}