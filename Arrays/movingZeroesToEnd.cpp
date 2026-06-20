// Moving Zeroes to end
// Time Complexity:O(n)
// Space Complexity:O(1)

#include <bits/stdc++.h>
using namespace std;

void movingZerosToEnd(vector<int> &arr)
{
    int index = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            index = i;
            break;
        }
    }
    if(index==-1) return ;
    
    int i = index, j = index + 1;
    while (j < arr.size())
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }
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

    movingZerosToEnd(arr);
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}