//MAXIMUM SUBARRAY
//Kadane's Algorithm
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

    int max_sum = INT_MIN ,sum = 0;
    for(int i=0 ; i<arr.size() ; i++){
        sum+=arr[i];
        max_sum = max(sum,max_sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<max_sum<<'\n';
    return 0;
}