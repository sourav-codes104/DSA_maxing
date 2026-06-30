//Maximum Subarray Product
//TC : O(n);
//SC : O(1); 


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

    int n = arr.size();
    int left = 0;
    int right = n - 1;
    int left_product = 1;
    int right_product = 1;
    int ans = INT_MIN;

    while (left < n && right >= 0)
    {
        if (left_product == 0)
            left_product = 1;
        if (right_product == 0)
            right_product = 1;

        left_product *= arr[left];
        right_product *= arr[right];

        ans = max(ans, max(left_product, right_product));
        left++;
        right--;
    }

    cout<<"The maximum product of subarray is : "<<ans<<"\n";

    return 0;
}